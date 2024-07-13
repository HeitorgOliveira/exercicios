#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int num;
    set<int> s1, s2;
    cin >> num;
    int sum1 = (num *(num+1))/2;
    int sum2 = 0;
    for (int i = 1; i < num+1; i++)
    {
        s1.insert(i);
    }
    int stop = sum1;
    for(int i = 1; i < stop; i++)
    {
        if (sum1 - i == sum2 + i)
        {
            cout << "YES" << endl;
            cout << s1.size() << endl;
            for(auto itr = s1.begin(); itr != s1.end(); itr++)
            {
                cout << *itr << " ";
            }
            cout << endl << s2.size() << endl;
            for(auto itr = s2.begin(); itr != s2.end(); itr++)
            {
                cout << *itr << " ";
            }
            return 0;
        }
        if (i > *s1.end())
        {
            int number = *s1.begin();
            s1.erase(number);
            sum1 -= number;
            s2.insert(number);
            sum2 += number;
        }
    }
    cout << "NO";
}