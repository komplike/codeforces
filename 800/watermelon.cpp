#include <iostream>

int main()
{
    int weight;
    std::cin >> weight;
    if (weight % 2 || weight==2) std::cout << "NO";
    else std::cout << "YES";
}