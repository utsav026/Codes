#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class child
{
private:
    string name,gender;
public:
    friend class parent;
    void get_data()
    {
        cout<<"Enter the name of child:";
        cin>>name;
        cout<<endl;
        cout<<"Enter the gender of the child:";
        cin>>gender;
        cout<<endl;
    }
    void show_data()
    {
        cout<<"The name of child: "<<name<<endl;
        cout<<"The gender of the child: "<<gender<<endl;
    }


};
class parent
{
    public:
    void ReadChildData(child &c)
    {
        c.get_data();
    }
    void DisplayChildData(child &c)
    {
        c.show_data();
    }

};
int main()
{
    child c;
    parent p;
    p.ReadChildData(c);
    p.DisplayChildData(c);
    c.get_data();
}
