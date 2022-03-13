#include<stdio.h>
int facto(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    scanf("%d",&n);
    int temp;
    temp=n;
    int r,sum=0,fac;
    while(n>0)
    {
        r=n%10;
        fac=facto(r);
        sum=sum+fac;
        n=n/10;
    }
    if(sum==temp)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
    return 0;
    
}