#include <iostream>
using namespace std;

void GCD(int m, int n , int &gcd,int &lcm)
{
	int a = m, b = n;
	while(b!=0)
	{
    	int temp = b; 
        b = a % b; 
        a = temp;  
	}
	gcd = a;
	lcm = (m * n) / gcd;
}
int main()
{
	int m, n;
	int gcd, lcm;
	cout << "请输入两个自然数m,n" ;
	cin >> m >> n ;
	GCD(m, n , gcd,lcm);
	cout << "最大公约数为："<< gcd<<endl;
	cout << "最小公因数为："<< lcm<<endl;
}
