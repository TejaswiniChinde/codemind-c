#include <stdio.h>
 int main()
{    
    int num;
    scanf("%d",&num);
    int square = num *num;
    int n = square;
    int digit;
    int sum = 0;
  
    
    while (n != 0) 
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    if (sum == num)
        {
            printf("Neon Number");
        } 
    else
        {
            printf("Not Neon Number");
        }
}

