#include<iostream>
#include<vector>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, t;
    cin >> n >> t;
    vector<int> a(n), s(n-1);
    cin >> a[0];
    
    int tmp = 0, res = 0;
    if (a[0]<t)
    {
        res = 1;
        tmp = 1;
        s[0] = a[0];
    }
    
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] + s[i-1] <= t)
        {
            s[i] = a[i] + s[i-1];
            tmp++;
            cout << a[i] << " " << s[i-1] << " " << tmp << "\n";
        }
        else
        {
            for (int j = i; i >= 0; j--)
            {
                /* code */
            }
            
            s[i] = ;
            tmp = 1;
        }
        if (tmp>res) res=tmp;
    }
    cout << res;
}