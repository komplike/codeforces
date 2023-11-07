#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, tmp, res;
    cin >> n >> k;
    vector<int> scores(n);

    // cin.clear();
    // cin.clear();
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        scores[i] = tmp;
    }

    for (int score : scores)
    {
        if (score > 0 && score >= scores[k-1])
            res++;
        else
            break;
    }
    cout << res;
}