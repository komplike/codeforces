#include <iostream>
#include <list>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string word;
    list<string> words;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        words.push_back(word);
    }
    for (int i = 0; i < n; i++)
    {
        word = words.front();
        words.pop_front();
        if (word.length()>10)
            cout << word.front() << word.length()-2 << word.back() << "\n";
        else
            cout << word << "\n";
    }
}