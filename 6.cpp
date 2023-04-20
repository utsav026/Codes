#include<iostream>
using namespace std;
class time
{
private:
    int hr,Min,sec;
public:
    void getdata()
    {
        cout<<"Enter hour:";
        cin>>hr;
        cout<<"Enter minute:";
        cin>>Min;
        cout<<"Enter second:";
        cin>>sec;
    }
    void putdata()
    {
        cout<<"Time is: "<<hr<<":"<<Min<<":"<<sec<<endl;
    }
    time()
    {
    hr=0;
    Min=0;
    sec=0;
    }
    time(int x, int y,int z=52){
        hr=x;
        Min=y;
        sec=z;
    }
    time(time &t)
    {
       hr=t.hr;
       Min=t.Min;
       sec=t.sec;
    }
    ~time()
    {
     cout<<"distroied"<<endl;
    }
};
int main()
{

    time t1;


    t1.putdata();
    t1.getdata();
    t1.putdata();
    time t2(2,35);
    t2.putdata();
    time t3(t2);
    t3.putdata();
    return 0;


}
