#include<iostream>
#include<iomanip>
//This program is created by 22cs080
using namespace std;
class Swap{
public:
    int num;
public:
    void getdata(){
    cout<<"Enter number:";
    cin>>num;
    }
};
int main(){
  Swap s1,s2;

  s1.getdata();
  s2.getdata();
  cout<<"Before swaping:"<<endl;
  cout<<"for s1 num="<<s1.num<<endl;
  cout<<"for s2 num="<<s2.num<<endl;

  s1.num= s1.num+s2.num;
  s2.num= s1.num-s2.num;
  s1.num= s1.num-s2.num;

  cout<<"After swapping:"<<endl;
  cout<<"for s1 num="<<s1.num<<endl;
  cout<<"for s2 num="<<s2.num<<endl;

cout<<"This program is created by Utsav_Shah_22cs080";
}
