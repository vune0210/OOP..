#include <iostream>
#include <math.h> 
#include <stdbool.h> 
using namespace std;
bool snt (int a) 
{for (int i=2;i<=sqrt(a);i++)
{if (a%i==0) return false;
 
 }return true; 
}
int main (){
	int a;
	cin >> a;
	
	for (int i=2;i<=a;i++)
	{
		while  (snt(i) && (a%i==0))
		{
			cout << i<< " " ; 
			a/=i; 
		}
	 } return 0; 
} 
