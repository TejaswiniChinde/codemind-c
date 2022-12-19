#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90)
    {
        printf("Grade A");
    }
    else if(n>=80)
    {
        printf("Grade B");
    }
    else if(n>=55)
    {
        printf("Grade C");
    }
    else if(n>=50)
    {
        printf("Grade D");
    }
    else if(n>=40)
    {
        printf("Grade E");
    }
    else if(n<40)
    {
        printf("Grade F");
    }
}