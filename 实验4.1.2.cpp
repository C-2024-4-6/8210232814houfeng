#include <iostream>
using namespace std;

double*  func(double arr[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j=0; j<9;j++)
		{
			if (arr[j]>arr[j+1])
			{
				double tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				changed = true;
			}
		}
	}while (changed);
	return arr;
}

int main()
{
    double a[10];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) 
	{
        cin >> a[i];
    }
	func(a);
	for (int k=0;k<10;k++)
	{
		cout << a[k] <<" ";
	}
	return 0;
}
