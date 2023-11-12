#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int t;
    cin >> t;
    vector<short int> res(t);
    while (t--)
    {
        short int n;
        cin >> n;
        vector<short int> a(n);
        for (short int& ai : a) cin >> ai;
        
        for (int i = 1; i < n; i++)
        {
            int j = i-1;
            for (j; j >= 0; j--)
            {
                if (a[j]<a[i])
                    break;
            }
            if (!(j-1) && (i+1)==n)
            {
                if (j-2 == i)
                    break;
                else
                    j++;
            }
            
            if (a[j+1]>a[i] && i+j+2 != n)
            {
                // cout << "\n->" << a[j+1] << " " << a[i] << " " << i << n << "\n";
                sort(a.begin()+j+1,a.begin()+i);
                res[t]++;
            }
        }
    }
    for (int i = res.size()-1; i >= 0; i--)
    {
        cout << res[i] << "\n";
    }
}