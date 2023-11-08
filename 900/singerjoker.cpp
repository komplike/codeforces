#include<iostream>

using namespace std;

short int n, d, t[100];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        d -= t[i];
    }

    if (d+1 && d/5>=(n-1)*2)
        cout << d/5;
    else
        cout << "-1";
}