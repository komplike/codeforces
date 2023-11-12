#include<iostream>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int a, b, c;
    cin >> a >> b >> c;
    // a*b*c
    // (a+b)*c
    // (a+c)*b
    // (b+c)*a
    // a+b+c
    cout << max(max(max(max(a*b*c, (a+b)*c), (b+c)*a), a+b*c), a+b+c);
}