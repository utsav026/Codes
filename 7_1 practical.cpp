
#include <iostream>
using namespace std;
class Number
{
private:
    int num;
public:
    Number()
    {
        num = 0;
    }
    Number(int n)
    {
        num = n;
    }
    Number(const Number& other)
    {
        num = other.num;
    }
    int getNum() const
    {
        return num;
    }
    void setNum(int n)
    {
        num = n;
    }
    void input()
    {
        cin >> num;
    }
    void output() const
    {
        cout << num;
    }
    Number operator++()   // prefix increment operator
    {
        ++num;
        return *this;
    }
    Number operator++(int)   // postfix increment operator
    {
        Number tmp(*this);
        ++num;
        return tmp;
    }
    Number operator-() const   // unary minus operator
    {
        return Number(-num);
    }
};

Number operator+(const Number& a, const Number& b)   // binary addition operator
{
    return Number(a.getNum() + b.getNum());
}

int main()
{
    Number n1, n2(5), n3(n2);
    n1.input();
    ++n1;
    n3 = n2++;
    cout << "n1 = ";
    n1.output();
    cout << "\nn2 = ";
    n2.output();
    cout << "\nn3 = ";
    n3.output();
    cout << "\n-n3 = ";
    (-n3).output();
    cout << "\nn1 + n2 = ";
    (n1 + n2).output();
    cout <<endl;
    return 0;
}
