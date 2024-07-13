#include <iostream>
#include <vector>

using namespace std;


//O problema consiste em achar a mediana de valores em uma janela, dada uma cadeia de numeros.
//1 - Ler a cadeia de numeros
//2 - Ler o tamanho da janela
//3 - Achar a mediana de cada janela
//3.1 - Insere-se em um vetor os valores da janela.
//3.2 - ordenamos o vetor e exibimos a mediana
//3.3 - removemos o primeiro elemento do vetor e adicionamos o proximo valor da janela
//3.4 - repetimos ate a janela chegar no ultimo numero da cadeia

void calcula(vector<int> vetor)
{
  int aux;
  for(int i = 0, fim = vetor.size(); i < fim; i++)
    {
      int passou = 0;
      for(int j = i, fim = vetor.size(); j <fim; j++)
        {
          if (vetor[j] <= vetor[i])
          {
            aux = vetor[j];
            vetor[j] = vetor[i];
            vetor[i] = aux;
            passou = 1;
          }
        }
      if (passou == 0)
      {
        break;
      }
    }
  if (vetor.size() % 2)
    cout << vetor[vetor.size()/2] << " ";
  else
    cout << vetor[(vetor.size()/2) -1] << " ";
}

int main()
{
  int n, k;
  vector<int> v1, v2;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      v1.push_back(a);
    }
  for(int i = 0; i < n-k+1; i++)
    {
      //cout << "i: "<<  i << endl << "k: " << k << endl;
      for(int j = k+i-1; j >= i; j--)
        {
          //cout << "j: " << j << endl;
          v2.push_back(v1[j]);
        }
      // for(int j = 0; j < v2.size(); j++)
      //   {
      //     printf("Janela %i: %i\n", i, v2[j]);
      //   }
      //printf("\n");
      calcula(v2); 
      //printf("valor na iteração %i: %zu\n", i, v2.size());
      v2.clear();
    }
}