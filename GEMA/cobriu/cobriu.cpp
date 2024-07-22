#include <iostream>
#include <set>
#include <string>

using namespace std;

void validate(int size, int letters, multiset<char> s);

int main(void)
{
    int t, size, letters;
    multiset<char> aaa;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int sizestring;
        cin >> size >> letters >> sizestring;
        for(int j = 0; j < sizestring; j++)
        {
            char c;
            cin >> c;
            aaa.insert(c);
        }
        validate(size, letters, aaa);
        //cin >> ws;
        aaa.clear();
    }
}

void validate(int size, int letters, multiset<char> s)
{
    // for (auto itr = s.begin(); itr != s.end(); itr++)
    // {
    //     printf("Letra: %c", *itr);
    // }
    for (int i = 0; i < letters; i++)
    {
        int letra = 'a' + i;
        if (size > s.count(letra))
        {
            cout << "NO" << endl;
            for(int j = 0; j < size; j++)
            {
                printf("%c", letra);
            }
            cout << endl;
            return;
        }
    }
    cout << "YES" << endl;
}