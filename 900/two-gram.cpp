#include<iostream>
#include<vector>
#include<cstring>
#include<map>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int n, x;
    cin >> n;
    vector<char> input(n);
    map<char*, int> ctr;
    char* ans;
    
    for (char& c : input) cin >> c;

    for (int i = 1; i < input.size(); i++)
    {
        int diff = abs((int)(input[i]-'0')-(int)(input[i-1]-'0'));
        // cout << diff << "\n" << (int)input[i]-'0' << "\n" << (int)(input[i-1]-'0') << "\n";
        // return 0;
        if (diff<=1)
        {
            cout << "HERE\n";
            ctr[strcat(&input[i],&input[i-1])] += 1;
            cout << "HERE2\n";
        }
    }

    for (const auto& [key, value] : ctr)
    {
        cout << key << " " << value << "\n";
    }
    
    
    for (const auto& [key, value] : ctr)
        if (value>x)
        {
            x = value;
            ans = key;
        }
        
    cout << ans;
}