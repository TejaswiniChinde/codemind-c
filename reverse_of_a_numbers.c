#include<stdio.h>
int main()
{
    int n,rev=0,t;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        rev=rev*10+t;
        n/=10;
    }
    printf("%d",rev);
}