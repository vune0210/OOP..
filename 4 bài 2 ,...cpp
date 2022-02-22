#include<stdio.h>
#include<stdbool.h>



int tonguocso(int a)
{
    int tong = 0;
    for(int i = 1; i < a; i++)
    {
        if(a%i == 0) tong+=i;
    }
    return tong; 
}


int main()
{
    int a,b; 
    scanf("%d%d",&a,&b);
    for(int i = a; i <= b;i++)
    {
        if(tonguocso(i) == i) printf("%d ",i);
    }

    return 0;
}
