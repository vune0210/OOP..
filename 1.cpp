#include <iostream>
using namespace std; 
int main (){
	int a,b;
	cin >> a>>b;
	for (int t=a;t<=b;t++)
	{ for (int i=2;i<t;i++)
	  { if (t%i!=0)
	   cout << t ;
	    
	  }
	 
	 } 
	 
	return 0; 
	 
} 
