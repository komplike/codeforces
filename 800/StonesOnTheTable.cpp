#include<iostream>

using namespace std;

int main ()
{
    int n, res;
    string s;
    char last;

    cin >> n;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == last)
        {
            res++;
        }
        last = s[i];
    }
    cout << res;
}