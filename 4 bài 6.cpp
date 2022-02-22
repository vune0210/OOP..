#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool Checknguyento(int a)
{
    for(int i = 2; i<=sqrt(a); i++)
    {
        if(a%i==0) return false;
    }
    return true;
}

int main()
{
    int a;
    scanf("%d", &a);
    for(int i=2; i<=a; i++)
    {
        while (Checknguyento(i) && (a%i==0))
        {
            printf("%d ", i);
            a/=i;
        }
    }
    
    return 0;
}

