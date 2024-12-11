#include <iostream>
#include <cmath> 
using namespace std;

bool is_prime(int num)
{
	int a = num;
	float b = sqrt(num);
	if(a==2) return true;
	if(a%2==0) return false;
	if(a<=1) return false;
	for (int i=3;i<=b;i+=2)
	{
		if(a%i==0)
		 {
		   return false;
	     }    
	}
	return true; 
}
int main()
{
  int count =0;
  int v =2;
  while(count<200)
  {
  	if(is_prime(v))
	  {
  	    cout << v << "\t";
		count++;	
		if (count%10==0)
		{
			cout << endl;
		}
	  }
	  v++;
   }
}
