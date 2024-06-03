#include <iostream>
using namespace std;

int count = 0;

void fun()
{
    if (count == 4)
        return;
    cout << count;
    count++;
    fun();
}

int main()
{
    fun();
    return 0;
}