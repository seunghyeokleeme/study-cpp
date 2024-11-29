#include <iostream>
#include <cstring>

using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "MyClass()" << endl;
    }

    MyClass(int number)
    {
        cout << "MyClass(int number)" << endl;

        this->number_ = number;
    }

    ~MyClass()
    {
        cout << "~MyClass()" << endl;
    }

    void Increment(int a)
    {
        number_ += a;
    }

    void Print()
    {
        cout << number_ << endl;
    }

private:
    int number_ = 0;
};

int main()
{

    MyClass my_class1;
    MyClass my_class2(123);

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    return 0;
}