#include <iostream>
using namespace std;

int main()
{
	bool arr[100] = {false};
	for (int j=1;j<=100;j++)  //��100��ѧ������ѭ�� 
	{
		for(int k=j-1;k<100;k+=j) //��j��ѧ��ÿ��j�������޸�һ�� 
		{
		  arr[k] = !arr[k];
		}
	}
	for (int p=0;p<100;p++)
	{
		cout << arr[p] <<" ";
	}
	cout << endl;
	for (int p=0;p<100;p++)
	{
		if(arr[p]){
			cout <<p+1<<" ";
		}
	 } 
	return 0;
}
