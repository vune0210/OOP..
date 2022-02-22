#include <iostream>
using namespace std;
int sf (int s)
{
	int a=0,a1=1,a2=1;
	if (s==0||s==1)
	return s; 
	else  
	for(int i=2;i<s;i++) 
	{
		a=a1;
		a1=a2;
		a2=a1+a; 
	}return a2; 
	 
 } 
int main (){
	int a;
	cin >> a;
	for (int i=0;i<a;i++)
	{
		cout << sf(i )<<" ";
	 } return 0; 
}  
