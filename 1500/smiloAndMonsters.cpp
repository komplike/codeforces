#include<iostream>
#include<deque>
#include<algorithm>

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
    int n, x = 0, ans = 0;
    cin >> n;
    deque<int> a(n);
    for (auto& d : a) cin >> d;

    sort(a.begin(),a.end());

    while (a.size()) { // more than 2 hordes
        if (x+a.front() < a.back())
        {//first attack
            x += a.front();
            ans += a.front();
            a.pop_front();
        } else if (x < a.back()) {//first + second attack
            a.front()--;
            x++;
            ans++;
            if (a.front() == 0)
                a.pop_front();
        } else {
            x = 0;
            a.pop_back();
            ans++;
        }
    } // last horde

    cout << ans;
}