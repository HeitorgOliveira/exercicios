#include <iostream>
#include <set>
<<<<<<< HEAD

using namespace std;
=======
>>>>>>> 765b01f48b0f870220113d9e8c9c8b9ff5ac9454

using namespace std;

//OBS: Esse exercício pede a divisão de uma PA de razão 1 em 2 subconjuntos de mesma soma.
//Note que para que a soma seja igual, a soma da PA deve ser par, pois será dividida em duas aprtes iguais.
//1 - Portanto o primeiro passo é verificar se S = [n(n+1)]/2 é par.
//2 - Depois disso, o nosso problema está em dividir S em duas partes iguais.
//2.1 - Se for uma quantidade par de numeros que foi informada, o primeiro numero faz par com o ultimo e os pares vão se formando da forma n[i] e n[-i-1].
//2.2 - Se for uma quantidade impar de numeros que foi informada, o primeiro numero faz par com o penultimo e os pares vão se formando da forma n[i] e n[-i-2] e o n[-1] fica isolado do n[0];
int main(void)
{
<<<<<<< HEAD
    int num;
    set<int> s1, s2;
    cin >> num;
    int sum1 = (num *(num+1))/2;
    int sum2 = 0;
    for (int i = 1; i < num+1; i++)
    {
        s1.insert(i);
    }
    int stop = sum1;
    for(int i = 1; i < stop; i++)
    {
        if (sum1 - i == sum2 + i)
        {
            cout << "YES" << endl;
            cout << s1.size() << endl;
            for(auto itr = s1.begin(); itr != s1.end(); itr++)
            {
                cout << *itr << " ";
            }
            cout << endl << s2.size() << endl;
            for(auto itr = s2.begin(); itr != s2.end(); itr++)
            {
                cout << *itr << " ";
            }
            return 0;
        }
        if (i > *s1.end())
        {
            int number = *s1.begin();
            s1.erase(number);
            sum1 -= number;
            s2.insert(number);
            sum2 += number;
        }
    }
    cout << "NO";
=======
  int n;
  cin >> n;
  int sum = (n*(n+1))/2;
  // 1
  if (sum%2)
    cout << "NO" << endl;
  else
  {
    set<int> s1, s2;
    for(int i = 1; i < n+1; i++)
      {
        s2.insert(i);
      }
    cout << "YES" << endl;
    // 2
    if (n%2)
    {
      for(int i = 1; i <= n/2; i+= 2)
        {
          s1.insert(i);
          s2.erase(i);
          s1.insert(n-i);
          s2.erase(n-i);
        }
      cout << s1.size() << endl;
      for(auto itr = s1.begin(); itr != s1.end(); itr++)
        {
          cout << *itr << " ";
        }
      cout << endl << s2.size() << endl;
      for(auto itr = s2.begin(); itr != s2.end(); itr++)
        {
          cout << *itr << " ";
        }
      cout << endl;
    }
    else
    {
      for(int i = 1; i < n/2; i+= 2)
        {
          s1.insert(i);
          s1.insert(n-i+1);
          s2.erase(i);
          s2.erase(n-i+1);
        }
      cout << s1.size() << endl;
      for (auto itr = s1.begin(); itr != s1.end(); itr++)
        {
          cout << *itr << " ";
        }
      cout << endl << s2.size() << endl;
      for (auto itr = s2.begin(); itr != s2.end(); itr++)
        {
          cout << *itr << " ";
        }
      cout << endl;
    }
  }
>>>>>>> 765b01f48b0f870220113d9e8c9c8b9ff5ac9454
}