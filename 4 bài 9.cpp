#include <iostream>
#include <math.h> 
using namespace std ;
bool songuyento(int a)
{
	int i;
	for (i=2;i<=sqrt(a);i++)
	{ if (a%i==0&&a>2) return false ; 
	 } 
	 return true; 
 } 
 int main (){
 	int a,b;
	 cin >> a>>b;
	 if (a>0&&b>0)
	 {for (int i=a;i<=b;i++)
	 { if (songuyento(i)) cout  <<  " " << i ; 
	  } 
	  } 
	  return 0; 
 } 
