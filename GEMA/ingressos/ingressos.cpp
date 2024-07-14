#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> precos;
    multiset<int> ingressos;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ingressos.insert(a);
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if (a < *ingressos.begin())
        {
            cout << "-1 ";
        }
        else if (ingressos.size() == 0)
        {
            cout << "-1 ";
        }
        else
        {
            int preco = *ingressos.lower_bound(a);
            if (preco == a)
            {
                cout << preco << " ";
                ingressos.erase(ingressos.find(preco));
            } 
            else
            {
                preco = *(--ingressos.lower_bound(a));
                if (preco < a)
                {
                    cout << preco << " ";
                    ingressos.erase(ingressos.find(preco));
                }
                else
                {
                    cout << "-1 ";
                }
            }
        }
    }
}