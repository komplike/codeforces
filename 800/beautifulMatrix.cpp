#include <iostream>

using namespace std;

int main()
{
    int n, steps;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n;
            if (n == 1)
                steps = abs(2-i)+abs(2-j);
        }
    }
    cout << steps;
}