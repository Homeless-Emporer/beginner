class HelloWord
{
    public static void main(String[] args)
    {
        int sum = 0;
        
        for (int i = 0; i < 2000000; i++)
        {
            sum += i;
        }
        System.out.printf("The current sum is: [%d]%n", sum);

    }
}
