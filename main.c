#include<stdio.h>

int main()
{
    int n, digit;
    int binary = 0;
    int place = 1;

    printf("Enter a decimal number\n");
    scanf("%d", &n);

    int temp = n;

    while(n > 0)
    {
        digit = n % 2;
        binary = binary + digit * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary of %d = %d\n", temp, binary);

    return 0;
}
