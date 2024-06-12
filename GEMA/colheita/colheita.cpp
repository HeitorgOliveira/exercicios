#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int x, y;
    cin >> x >> y;
    vector<std::vector<int>> matriz(x, vector<int>(y));
    for (int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cin >> matriz[i][j];
        }
    }
    int ix = 0, iy = 0, maiordif = 0;
    while (ix < x && iy < y)
    {
        int maiornum = 0;
        for(int i = 0; i <= ix; i++)
            if(matriz[i][iy] > maiornum) maiornum = matriz[i][iy];
        for(int j = 0; j <= iy; j++)
            if(matriz[ix][j] > maiornum) maiornum = matriz[ix][j];
        for(int i = 0; i < ix; i++)
            for(int j = 0; j < iy; j++)
                if (maiornum - matriz[i][j] > maiordif) maiordif = maiornum - matriz[i][j]; 
        if(ix < x) ix++;
        if(iy < y) iy++;
    }
    cout << maiordif <<endl;
}