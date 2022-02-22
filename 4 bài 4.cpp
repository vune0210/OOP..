#include <iostream>
#include <stdbool.h> 
using namespace std;
 
bool snt (int a)
{for(int i=2;i<a;i++)
{if (a%i==0)  return false;
 } return true;
 } 
  
int sf (int b)
{long long a1=1,a2=1,a;
while (a<b){
	a=a1+a2;
	a1=a2;
	a2=a; 
} if  (a==b) return 1;
else return 0; 
 } 
int s (int c)
{int a,s=0; 

   while (c>0)
    {a=c%10;
     s+=a ;
     c/=10; 
 } if (sf (s)) return 0; 
 return 1;
 } 
int main (){
	int a,b;
	cin >>a>>b;
	for (int i=a;i<=b;i++)
	{ if (sf(i)== true&&s(i)==1)
	 cout << i; 
	 }
	 return 0; 
} 
