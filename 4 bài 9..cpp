#include<stdio.h>
#include<math.h>



int main()
{
    int a,b,i,j,count = 0;
    scanf("%d%d",&a,&b);
    for(i = a ;i <=b ; i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0 && i> 2)
            {
                count++;
            }
        }
        if(count == 0) printf("%d ", i);
        count =0;
    }
    return 0;
}
