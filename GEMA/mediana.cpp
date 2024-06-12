#include <iostream>
#include <vector>
 
std::vector<int> sort(int size, std::vector<int> vetor);
 
int main(void)
{
    int num, k;
    std::cin >> num  >> k;
    std::vector<int> sequencia(num);
    for(int i = 0; i < num; i++)
    {
        std::cin >> sequencia[i];
    }
    std::vector<int> aux(k, 0);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < k; j++)
        {
            aux[j] = sequencia[i+j];
        }
        aux = sort(k, aux);
        std::cout << aux[(k-1)/2] << " ";
        if (i+k == num) break;
    }
}
 
std::vector<int> sort(int size, std::vector<int> vetor)
{
    int aux = 0;
    for (int i = 0; i < size; i++)
    {
        int passou = 0;
        for (int j = i; j < size; j++)
        {
            if (vetor[i] >= vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                passou ++;
            }
        }
        if (!passou)
        {
            break;
        }
    }
    return vetor;
}
