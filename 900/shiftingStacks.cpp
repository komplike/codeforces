#include<iostream>

using namespace std;
short int nCases, nStacks;
bool res;
long long int gain, h[100];
string output;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> nCases;
    while (nCases--)
    {
        cin >> nStacks;
        res=1;
        gain = 0;
        for (int i = 0; i < nStacks; i++)
        {
            cin >> h[i];
            gain+=h[i]-i;
            if (gain<0)
                res = 0;
        }
        if (res)
                output.append("YES\n");
            else
                output.append("NO\n");
    }
    cout << output;
}