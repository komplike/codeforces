#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int t;
    cin >> t;
    int n, k;
    vector<vector <int>> out(t);
    while (t--)
    {
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vector<int> b(n), r(n);
        
        for (pair<int, int>& x : a) 
        {
            cin >> x.first;
            x.second = (&x - &a[0]);
        }
        for (int& x : b) cin >> x;

        stable_sort(b.begin(),b.end());
        sort(a.begin(),a.end());

        for (int i = 0; i < n; i++)
        {
            r[a[i].second] = b[i];
        }
        out[t] = r;
    }
    for (int i = 1; i <= out.size(); i++)
    {
        for(auto& num : out[out.size()-i])
        {
            cout << num << ' ';
        }
        cout << "\n";
    }
}