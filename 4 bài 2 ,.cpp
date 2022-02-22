#include <iostream >
#include <stdbool.h> 
using namespace std;

bool  checkso (int a)
{ int s=0 ;
  for(int i=1;i<a;i++){
  if (a%i==0)  
  s +=i;
  if (s<a) return checkso;
  } 
int main (){
	int a,b;
	cin >>a>>b;
	for (int i=a;i<=b;i++)
	{ if (checkso(i)==i)
	 cout <<  i; 
	 } 
	  
	 return 0; 
} 
