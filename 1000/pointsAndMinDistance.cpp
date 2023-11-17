#include<iostream>
#include<vector>

#define ll long long int
using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int t;
    cin >> t;
    
    while(t--) {
        solve();
        cout << "\n";
     }
}

void solve() {
    int n;
    cin >> n;
    int len = 2*n;
    int ans = 0;
    vector<int> a(len);
    for (auto& d : a) cin >> d;

    pair<int, int> duo;
    vector<pair<int,int>> pairs(n);
    for (int i = 0; i < len-4; i+=4) {
        
        duo = {max(a[i],a[i+1]), max(a[i+2], a[i+3])};
        ans += abs(duo.first-duo.second);
        duo = {min(a[i],a[i+1]), min(a[i+2], a[i+3])};
        ans += abs(duo.first - duo.second);
    }
    cout << ans << "\n";
    for (int i = 0; i < len-8; i+=4) {
        cout << a[i] << " " << a[i+1] << "\n";
    }
}