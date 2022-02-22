#include <iostream >
using namespace std;

bool  checkso (int a)
{ for(int i=1;i<a;i++){

 if (a%i==0)return true;  
 } return false ;}
int main (){
	int a,b ,s=0;
	cin >>a>>b;
	for (int i=a;i<=b;i++)
	{ if (checkso(i))
	cout << " " << s ;
	 } return 0; 
} 
