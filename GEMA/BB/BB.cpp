#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int> &v1, int min, int max, int target)
{
    if (min > max)
    {
        return -1;
    }

    int mindex = (min + max) / 2;
    int middle = v1[mindex];

    if (middle == target)
    {
        return mindex;
    }

    if (middle > target)
    {
        return binary_search(v1, min, mindex -1, target);
    }
    if (middle < target)
    {
        return binary_search(v1, mindex + 1, max, target);
    }
    return -1;
}

int main(void)
{
    int n, q;
    cin >> n >> q;
    vector<int> v1(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    int lower = 0;
    int higher = n - 1;
    for(int i = 0; i < q; i++)
    {
        int target;
        cin >> target;
        cout << binary_search(v1, lower, higher, target) << endl;
    }
}