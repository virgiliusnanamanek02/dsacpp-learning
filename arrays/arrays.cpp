// Example of arrays data structure

#include <iostream>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[5];

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << c[i] << std::endl;
    }

    return 0;
}