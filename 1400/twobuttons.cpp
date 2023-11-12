#include<iostream>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m;
    short int result;
    cin >> n >> m;
    while (n!=m && m>=0)
    {
        if (m%2 || m<n) m += 1;
        else m /= 2;
        result++;
    }
    cout << result;
}