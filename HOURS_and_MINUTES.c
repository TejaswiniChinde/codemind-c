#include<stdio.h>
void homi(int m)
{
    int h,mi;
    h=m/60;
    mi=(m*60-(3600*h))/60;
    printf("%d Hour(s) %d Minute(s)",h,mi);
}
int main()
{
    int m;
    scanf("%d",&m);
    homi(m);
}