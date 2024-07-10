#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, target;
    vector<int> v1;
    cin >> n >> target;
    for(int i = 0; i < n ; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for(int i = 0; i < n; i++)
    {
        int target1 = target;
        target1 -= v1[i];
        for(int j = i+1; j < n; j++)
        {
            if(target1 == v1[j])
            {
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }                        
        }
    }
    cout << "IMPOSSIBLE" << endl;
}