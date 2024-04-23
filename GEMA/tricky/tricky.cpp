#include <iostream>

int main()
{
    int n, t;
    std::cin >> t;
    bool passou[1000];
    std::string a, b, c;
    for (int i = 0; i < t; i++)
    {
        passou[i] = true;
        std::cin >> n;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        for (int k = 0; k < n; k++)
        {
            if (a[k] >= 'a' && a[k] <= 'z')
                if ((a[k] == c[k] && a[k] != b[k]) || (b[k] == c[k] && b[k] != a[k]))
                    passou[i] = false;
            else if (a[k] >= 'A' && a[k] <= 'Z')
                if (a[k] != c[k])
                    passou[i] = false;
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (passou[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
}