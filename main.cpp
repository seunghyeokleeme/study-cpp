#include <iostream>

using namespace std;

int main()
{
    int a = 123;

    cout << a << " " << &a << endl;

    int *b = &a;
    cout << b << " " << *b << endl;

    *b = 567;

    cout << a << " " << b << " " << *b << endl;

    double *c = 0;

    cout << sizeof(int) << " " << sizeof(double) << endl;
    cout << sizeof(int *) << " " << sizeof(double *) << endl;
    cout << sizeof(b) << " " << sizeof(c) << endl;

    int my_array[] = {23, 38, 56, 69, 74};

    char my_str[] = {'h', 'e', 'l', 'l', 'o'};

    char *ptr = my_str;

    cout << *(ptr + 4) << endl;
    cout << ptr[4] << endl;

    return 0;
}