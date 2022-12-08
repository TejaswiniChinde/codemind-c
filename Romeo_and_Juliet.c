#include<stdio.h>
void romeojuliet(int x,int y,int z)
{
    int n;
    n=(x*5+y*10)/z;
    printf("%d",n);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    romeojuliet(x,y,z);
}