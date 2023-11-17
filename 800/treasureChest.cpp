#include<iostream>
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
    int x, y, k;
    cin >> x >> y >> k;
    cout << y + abs(y - x - k);
}