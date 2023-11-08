#include<iostream>

using namespace std;

short int t, n, d, s, k, tmp, res[1000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> n;
        k = 401;
        for (int i = 0; i < n; i++)
        {
            cin >> d >> s;
            tmp = d + (s+1)/2 - 1;
            if (tmp < k)
                k = tmp;
        }
        res[j] = k;
    }
    for (int i = 0; i < t; i++)
    {
        cout << res[i] << "\n";
    }
}