#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, res = 0;
    cin >> n;
    deque<short int> s(n);

    for (short int& x : s) cin >> x;
    
    sort(s.begin(),s.end());

    while (s.size() && s.back() == 4)
    {
        s.pop_back();
        res++;
    }

    while (s.size() && s.back() == 3)
    {
        if (s.front() == 1)
        {
            s.pop_back();
            s.pop_front();
            res++;
        }
        else
        {
            s.pop_back();
            res++;
        }
    }

    while (s.size() && s.back() == 2)
    {
        if (s.size() > 1)
        {
            if (*(s.end()-2) == 2)
            {
                s.pop_back(); s.pop_back(); 
                res++;
            }
            else if (s.size() > 2)
            {
                s.pop_back(); s.pop_back(); s.pop_back();
                res++;
            }
            else
            {
                s.pop_back(); s.pop_back();
                res++;
            }
        }
        else
        {
            s.pop_back();
            res++;
        }
    }
    while(s.size()>3)
    {
        s.pop_back(); s.pop_back(); s.pop_back(); s.pop_back(); 
        res++;
    }
    if (s.size())
        res++;
    
    cout << res;
}