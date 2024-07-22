#include <iostream>
#include <vector>

using namespace std;

vector<long long> initialize_sum(const vector<int> &v1)
{
    int n = v1.size();
    vector<long long> sum(n);
    sum[0] = v1[0];
    for(int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1] + v1[i];
    }
    return sum;
}

long long partial_sum(const vector<long long> &sum, int lower, int higher)
{
    if (lower <= 1)
    {
        return sum[higher-1];
    }
    return sum[higher-1] - sum[lower-2];
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
    vector<long long> sum = initialize_sum(v1);
    int lower, higher;
    for(int i = 0; i < q; i++)
    {
        cin >> lower;
        cin >> higher;
        cout << partial_sum(sum, lower, higher) << endl;
    }
}