#include <stdio.h>
#include <math.h>

// Vector structure
typedef struct {
    double x, y, z;
} Vector;

// Vector operations
Vector vec_add(Vector a, Vector b) {
    return (Vector){a.x + b.x, a.y + b.y, a.z + b.z};
}

Vector vec_sub(Vector a, Vector b) {
    return (Vector){a.x - b.x, a.y - b.y, a.z - b.z};
}

Vector vec_scale(Vector v, double t) {
    return (Vector){v.x * t, v.y * t, v.z * t};
}

double vec_dot(Vector a, Vector b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector vec_normalize(Vector v) {
    double mag = sqrt(vec_dot(v, v));
    return vec_scale(v, 1.0 / mag);
}


// Ray structure
typedef struct {
    Vector origin;
    Vector direction;
} Ray;

// Camera structure
typedef struct {
    Vector position;
    Vector lower_left_corner;
    Vector horizontal;
    Vector vertical;
} Camera;

// Initialize camera
Camera init_camera() {
    Vector position = {0.0, 0.0, 0.0};
    Vector lower_left_corner = {-2.0, -1.0, -1.0};
    Vector horizontal = {4.0, 0.0, 0.0};
    Vector vertical = {0.0, 2.0, 0.0};
    
    Camera cam = {position, lower_left_corner, horizontal, vertical};
    return cam;
}

// Function to generate a ray from the camera through pixel (u, v)
Ray get_ray(Camera *cam, double u, double v) {
    Vector direction = vec_add(vec_add(cam->lower_left_corner, vec_scale(cam->horizontal, u)),
                               vec_scale(cam->vertical, v));
    direction = vec_sub(direction, cam->position);
    return (Ray){cam->position, vec_normalize(direction)};
}


// Sphere structure
typedef struct {
    Vector center;
    double radius;
} Sphere;

// Check for ray-sphere intersection
int hit_sphere(Sphere *sphere, Ray *ray, double *t) {
    Vector oc = vec_sub(ray->origin, sphere->center);
    double a = vec_dot(ray->direction, ray->direction);
    double b = 2.0 * vec_dot(oc, ray->direction);
    double c = vec_dot(oc, oc) - sphere->radius * sphere->radius;
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        *t = (-b - sqrt(discriminant)) / (2.0 * a);
        return 1;  // Ray hits the sphere
    }
    return 0;  // No hit
}


// Compute the color based on whether the ray hits the sphere
Vector ray_color(Ray *ray, Sphere *sphere) {
    double t;
    if (hit_sphere(sphere, ray, &t)) {
        // Color based on the normal (for a simple shading effect)
        Vector hit_point = vec_add(ray->origin, vec_scale(ray->direction, t));
        Vector normal = vec_normalize(vec_sub(hit_point, sphere->center));
        return vec_scale((Vector){normal.x + 1, normal.y + 1, normal.z + 1}, 0.5); // map to [0,1]
    }
    
    // Background color (gradient)
    Vector unit_direction = vec_normalize(ray->direction);
    t = 0.5 * (unit_direction.y + 1.0);
    return vec_add(vec_scale((Vector){1.0, 1.0, 1.0}, 1.0 - t),
                   vec_scale((Vector){0.5, 0.7, 1.0}, t));
}



int main() {
    // Image resolution
    const int image_width = 400;
    const int image_height = 200;

    // Initialize the camera
    Camera cam = init_camera();

    // Create a simple sphere
    Sphere sphere = {{0.0, 0.0, -1.0}, 0.5};

    // Output the PPM image file header
    printf("P3\n%d %d\n255\n", image_width, image_height);

    // Loop over each pixel
    for (int j = image_height - 1; j >= 0; --j) {
        for (int i = 0; i < image_width; ++i) {
            // Convert pixel coordinates to normalized screen space
            double u = (double)i / (image_width - 1);
            double v = (double)j / (image_height - 1);

            // Get the ray for the pixel
            Ray ray = get_ray(&cam, u, v);

            // Compute the color
            Vector color = ray_color(&ray, &sphere);

            // Write the color in PPM format
            int ir = (int)(255.999 * color.x);
            int ig = (int)(255.999 * color.y);
            int ib = (int)(255.999 * color.z);
            printf("%d %d %d\n", ir, ig, ib);
        }
    }
    
    return 0;
}
