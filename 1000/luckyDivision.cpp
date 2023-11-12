#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int n;
    const short int NUMS[8] = {4, 7, 47, 447, 474, 477, 747, 774};
    cin >>  n;
    
    for (const int &num : NUMS)
    {
        if (n % num)
            continue;
        else 
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}