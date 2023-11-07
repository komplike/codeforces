#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, n1, n2, n3, result;
    cin >> n;
    vector<int> vec(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> n1 >> n2 >> n3;
        if (n1+n2+n3>1)
            result++;
    }
    cout << result;
}