#include <iostream>
using namespace std;

class Volume{
	private:
		double length;
		double width;
		double height;
		double volume;
	public:
		void set(double Length,double Width,double Height){
			length = Length;
			width = Width;
			height = Height;
		}
		void get_volume(){
			volume = length*width*height; 
		}
		void show_volume(){
			cout << volume;
		}
		
};
int main(){
	double l,w,h;
	Volume v1;
	Volume v2;
	Volume v3;
	
	cout << "�������һ�����ӵĳ���ߣ�" <<endl;
	cin >> l >> w >> h;
	v1.set(l,w,h);
	v1.get_volume();
	
	cout << "������ڶ������ӵĳ���ߣ�" <<endl;
	cin >> l >> w >> h;
	v2.set(l,w,h);
	v2.get_volume();
	
	cout << "��������������ӵĳ���ߣ�" <<endl; 
	cin >> l >> w >> h;
	v3.set(l,w,h);
	v3.get_volume();
	
	cout <<"�������ӵ�����ֱ�Ϊ��"<<endl; 
	v1.show_volume();
	cout <<" ";
	v2.show_volume();
	cout <<" ";
	v3.show_volume();
}
