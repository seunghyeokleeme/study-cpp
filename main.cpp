#include <iostream>

using namespace std;

int Add(int a, int b);

void Add(int a, int b, int *c, int *d)
{
    *c = a + b;
    *d = a - b;
}

int main()
{
    cout << Add(1, 2) << endl;

    int sum;
    int sub;
    Add(4, 5, &sum, &sub);

    cout << sum << " " << sub << endl;

    return 0;
}

int Add(int a, int b)
{
    return a + b;
}