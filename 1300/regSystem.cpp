#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<string> lines(n);
    for (string& line : lines) cin >> line;
    unordered_map<string, int> hashmap;

    for (string& str : lines)
    {
        if (!hashmap.contains(str))
        {
            hashmap[str] = 0;
            cout << "OK\n";
        }
        else
        {
            hashmap[str]++;
            cout << str << hashmap[str] << "\n";
        }
    }
}