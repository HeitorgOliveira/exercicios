#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(n);
    set<int> s1;
    v1[0] = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> v1[i];
        s1.insert(v1[i]);
    }
    for(int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for(int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        int index = --lower_bound(v1.begin(), v1.end(), a) - v1.begin();
        if (s1.find(a) != s1.end())
        {
            index++;
        }
        cout << v2[index] << " ";
    }
}