#include <iostream>
using namespace std;
int main (){
	int a,i,s1=0,s2=0;
	cin>>a;
	while (a>0)
	{
		i=a%10;
	    if (i%2==0)
		s1 ++;
		else
		s2++;
		a/=10; 
		
	 }
	  cout <<s1<<" "<<s2;
	 return 0; 
} 
