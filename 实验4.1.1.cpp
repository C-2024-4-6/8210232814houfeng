#include <iostream>
using namespace std;

int main(){
  int arr[10];
  int count =0;
  for(int i=0;i<10;i++)
  {
  	int a;
  	cout << "请输入一个数" <<endl;
  	cin >> a;
  	bool unique=true;
	for(int j =0;j<count;j++)
	  {
  		if(a==arr[j]){
  		unique=false;
  		break;
  	    }
	  }
	if(unique)
	{
		arr[count]=a;
		count++;
	}
  }
  for(int k=0;k<count;k++)
  {
  	cout << arr[k];
  }
  return 0;
}
