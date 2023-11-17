#include<iostream>
#include<vector>

#define ll long long int
using namespace std;

void solve();

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int t;
    cin >> t;
    
    while (t--)
        solve();
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> b(n);

    for (int& d : b) cin >> d;

    k = min(k, n);
    int last = n - 1;

    for (int i = 0; i < k; i++) {
        if (b[last] > n) {
            cout << "NO\n";
            return;
        }
        last += n - b[last];
        if (last >= n) {
            last -= n;
        }
    }
    cout << "Yes\n";
}