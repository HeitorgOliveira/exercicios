#include <iostream>

using namespace std;

int main()
{
    int ia, ib, fa, fb;
    cin >> ia >> ib >> fa >> fb;
    if (ia == fa && ib == fb)
    {
        cout << 0;
    }
    else if (ia != fa && ib != fb)
    {
        cout << 1;
    }
    else if (ia != fa && ib == fb)
    {
        cout << 1;
    }
    else if (ia == fa && ib != fb)
    {
        cout << 2;
    }
}