#include<iostream >


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
	int s = 0;
    int temp = a; 
	while (a>0)
	{
		
	    s+= giaiThua(a%10); 
		a/=10;  
	 } 
	 if (s == temp) return true;
	 return false;  
 } 
 int main(){
 	int a,b;
	 cin >>a >>b;
	 int s=0; 
	 for (int i=a;i<=b;i++) 
	 { 
        if (strong (i)==true )
		s++;
		cout <<i<<" ";
	 
	 } 
	 return 0; 
 }
