int isMax(int arr[], int size);


int main() {
    // Write C code here
int numbers[100];
int n;

puts("Enter the intended amount: ");
scanf("%d", &n);

puts("Enter values to determine the largest: ");
for (int i = 0; i < n; ++i)
{
    scanf("%d", &numbers[i]);
}
printf("The largest number in here is %d", isMax(numbers, n));

return 0;
}
int isMax(int arr[], int size)
{
    int max = arr[0];
    for ( int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] > arr[j])
            {
                max = arr[i];
            }
        }
    }
    
    return max;
}
