#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n, q, p[200001], x , y, res[200001];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort(&p[0],&p[n]);

    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        for (int j = 0; j < y; j++)
        {
            res[i]+=p[n-x+j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        cout << res[i] << "\n";
    }
}