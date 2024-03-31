#include <iostream>

int main()
{
    bool passou = true;
    std::string S;
    std::cin >> S;

    int aux = size(S);
    if (!(S[0] == '<' && S[aux-1] == '>'))
    {
        passou = false;
    }
    for (int i = 1; i < aux-1; i++)
    {
        if (S[i] != '=')
        {
            passou = false;
        }
    }
    (passou) ? (std::cout << "Yes"):(std::cout << "No");
}