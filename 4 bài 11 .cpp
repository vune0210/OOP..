#include<iostream >
#include <stdbool.h> 
using namespace std;
int giaiThua(int n)
{
    int s=1;
	for (int i=1;i<=n;i++)
	{
		s*=i; 
	 } return s ;
}
bool strong (int a)
{
	int i,s,m;
	int b=a; 
	while (a>0)
	{
		
	    s+= giaiThua(a%10); 
	    s/=10; 
		  
	 } 
	 if (s==b) return true;
	 return false;  
 } 
 int main(){
 	int a,b,k=0;
	 cin >>a >>b;
	 for (int i=a;i<=b;i++) 
	 { if (strong (i)== true )
	 k++; 
	  
	 cout <<i;
	 
	 }if (k=0)
	 cout << "0"; 
	 
	 return 0; 
 } 
