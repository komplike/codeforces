#include<iostream>
#include<vector>
#include<string>


using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int i, n, ans = 0;
    cin >> n;
    vector<string> tickets(n);
    vector<int> lengths(n);

    for (i = 0; i < n; i++) {
        cin >> tickets[i];
        lengths[i] = tickets[i].size();
    }
    int lsum, rsum;
    string s;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << tickets[i] << " " << tickets[j] << "\n";
            if (!((lengths[i]+lengths[j])%2))
            {
                // cout << "even lengths... " << lengths[i] << " + " << lengths[j] << "\n";
                s = tickets[i] + tickets[j];
                lsum = 0;
                rsum = 0;
                for (int k = 0; k < s.size(); k++)
                {
                    if (k<s.size()/2)
                        lsum+=(int)s[k];
                    else
                        rsum+=(int)s[k];
                }
                // cout << "sums: " << lsum << " == " << rsum << "\n";
                if (lsum==rsum)
                {
                    // cout << " ans++ \n";
                    ++ans;
                }
            }
        }
    }
    cout << ans;    
}