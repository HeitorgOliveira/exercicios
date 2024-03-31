#include <iostream>

int main()
{
    int N, X, Y;
    std::string S;
    std::cin >> N >> X >> Y;
    std::cin >> S;
    for (int i = 0; i < N; i++)
    {
        switch(S[i])
        {
            case 'C':
                X -= 1;
                break;
            case 'B':
                X += 1;
                break;
            case 'D':
                Y += 1;
                break;
            case 'E':
                Y -=1;
                break;
        }
    }
    printf("%i %i\n", X, Y);
}