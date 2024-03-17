#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int sum = 0;

        while (num != 0)
        {
            int digit = num % 10;
            sum += fact(digit);
            num /= 10;
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
