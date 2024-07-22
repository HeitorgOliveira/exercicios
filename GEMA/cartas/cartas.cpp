#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    int a, b, conta, contb;
    cin >> a >> b;
    set<int> cartasA, cartasB, tot;
    for(int i = 0; i < a; i++)
    {
        int n;
        cin >> n;
        cartasA.insert(n);
        tot.insert(n);
    }
    for(int i = 0; i < b; i++)
    {
        int m;
        cin >> m;
        cartasB.insert(m);
        if (tot.find(m) == tot.end())
            contb++;
        tot.insert(m);

    }
    for(auto itr = cartasB.begin(); itr != cartasB.end(); itr++)
    {
        tot.erase(*itr);
    }
    conta = tot.size();
    if (conta > contb)
        cout << contb << endl;
    else
        cout << conta << endl;

}
