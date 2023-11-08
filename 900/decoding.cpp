#include<iostream>

using namespace std;
short int n,mid;
char s[2000];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    
    if (n%2) 
    {
        mid=n/2;
        cin >> s[mid];
        for (int i=1; i <= mid; i++) 
        {
            cin >> s[mid-i];
            cin >> s[mid+i];
        }
    }
    else 
    {
        mid=n/2-1;
        for (int i=0; i <= mid; i++)
        {
            cin >> s[mid-i];
            cin >> s[mid+i+1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
} 