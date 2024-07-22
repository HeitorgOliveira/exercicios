#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if ((a%2) && (a > 1))
        {
            cout << (a-1)/2 << " ";
        }
        else if (!(a%2) && (a > 2))
        {
            cout << a/2 - 1 << " ";
        }
        else
        {
            cout << "0 ";
        }
    }
}