#include<iostream>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k, d, res;
    cin >> n >> k >> d;
    
    for (int i = k; i > 0; i--)
    {
        if (i>n)
            continue;
        if (i==n)
        {
            res++;
        }

        
    }
    
}

/*
2 2 1
2
1 1

3 3 2
3
2 1
1 2

3 3 1
3
2 1
1 2
1 1 1

4 3 2
3 1
2 2
2 1 1
1 3
1 2 1
1 1 2

4 5 2
4
3 1
2 2
2 1 1
1 3
1 2 1
1 1 2
*/