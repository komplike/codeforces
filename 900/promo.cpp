#include<iostream>
#include<algorithm>
#include<vector>
// #include <chrono>

using namespace std;
// int n, q, res[200001];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<long long> p(n), s(n+1);

    for (auto& x : p) cin >> x;
    sort(p.begin(),p.end());

    for (int i = 0; i < n; ++i) s[i + 1] = s[i] + p[i];

    while (q--) 
    {
        int x, y;
        cin >> x >> y;
        cout << s[n - x + y] - s[n - x] << '\n';
    }
    /* slow code - initial
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        for (int j = 0; j < y; j++)
        {
            res[i]+=p[n-x+j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << res[i] << "\n";
    } */
}