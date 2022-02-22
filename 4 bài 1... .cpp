#include <iostream>
#include <math.h>
using namespace std;
bool checksonguyento (int a)
{
    if(a == 1) return false;
    for (int i=2;i<= sqrt(a);i++)
  {if (a%i==0 && a > 2)return false;
  }return true;
  }
bool checkchuso (int b)
{ int sum,r;
 while (b>0)
 {r=b%10;
 if(checksonguyento(r) == false) return false;
 sum+=r;
 b/=10;
 }
 if (checksonguyento (sum))return true;
 else return false;
}
int main (){
	int a,b ,dem=0;
	int i;
	cin>> a >> b;
	for (i=a;i<=b;i++){
		if (checksonguyento(i) && checkchuso(i))
		dem ++; 
	} cout << dem;
	return 0; 
} 

