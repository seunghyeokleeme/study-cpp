#include <iostream>

using namespace std;

int main()
{
    /* for (int i = 5; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl; */

    /* int my_array[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};

    for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
    {
        if (i > 0)
        {
            if (my_array[i] < my_array[i - 1])
                break;
        }
        cout << my_array[i] << " ";
    }
    cout << endl; */

    /*     char my_string[] = "Hello, World!";

        for (int i = 0; my_string[i] != '\0'; i++)
        {
            cout << i << " " << my_string[i] << endl;
        }
        cout << endl; */

    char my_string[] = "Hello, World!";

    int i = 0;

    while (my_string[i] != '\0')
    {
        cout << my_string[i];
        i++;
    }
    cout << endl;

    return 0;
}