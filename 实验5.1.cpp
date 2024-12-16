#include<iostream>
using namespace std; 
class Time
{
    private:            
        int hour;
        int minute;
        int sec;
    public:
    	void InputTime(int Hour,int Minute,int Sec){
    		hour = Hour;
    		minute = Minute;
    		sec = Sec;
		}
	    void ShowTime(){
	    	cout << hour <<":" << minute <<":" << sec <<endl;;
		}
};
int main()
{
	int h,m,s;
	Time t1;
	cin >> h >> m >> s;
	t1.InputTime(h,m,s);
	t1.ShowTime();
return 0;
}
