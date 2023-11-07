#include<iostream>
#include<set>

using namespace std;

int main()
{
    string s;
    set<char> uniques;

    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        uniques.insert(s[i]);
    }
    cout << ((uniques.size()%2) ? "IGNORE HIM!" : "CHAT WITH HER!");
}