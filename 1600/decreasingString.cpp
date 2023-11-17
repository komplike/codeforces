#include<iostream>
#define ll long long int
using namespace std;

char solve();

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int t;
    string ans;
    cin >> t;
    
    while(t--) {
        ans += solve();
     }
     cout << ans;
}

char solve() {
    string s, ns;
    int pos, idx;
    cin >> s;
    cin >> pos;
    ns = s;
    while (ns.size()<pos)
    {
        idx = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[idx]<s[i])
                idx = i;
        }
        ns += s.erase(idx,1);
        // cout << ns << '\n';
    }
    // cout << ns[pos-1] << "\n";
    return ns[pos-1];
}