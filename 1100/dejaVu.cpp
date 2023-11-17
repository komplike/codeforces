#include<iostream>
#include<vector>

#define ll long long int
using namespace std;

void solve();
int powOf(int const& exp);
bool is_divisible(int, int const&);

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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), x(q),exps(q), adds(q);

    for (auto& d : a) cin >> d;
    for (auto& d : x) cin >> d;

    for (int i = 0; i < q; i++) {
        exps[i] = powOf(x[i]);
        adds[i] = powOf(x[i]-1);
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < q; i++) {
            if (is_divisible(a[j],exps[i])) {// is_divisible(a[j],powOf(x[i]))) {
                a[j] += adds[i];
            }
        }
    }
    for (auto& d : a) cout << d << " ";
}

int powOf(int const& exp) {
    int div = 2;
    if (exp == 0) {
        return 1;
    }
    for (int i = 1; i < exp; i++) {
        div *= 2;
    }
    return div;
}

bool is_divisible(int d, int const& div) {
    while (d >= div)
    {
        d -= div;
    }
    if (d == 0)
        return true;
    else
        return false;
}
