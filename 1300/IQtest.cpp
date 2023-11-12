#include<iostream>
#include<vector>

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int n, idx;
    cin >> n;
    vector<short int> numbers(n);

    for (short int &num : numbers)
    {
        cin >> num;
    }
    
    if (*(numbers.end()-1) % 2 && *(numbers.end()-2) % 2 ||
        *(numbers.end()-2) % 2 && *(numbers.end()-3) % 2 ||
        *(numbers.end()-1) % 2 && *(numbers.end()-3) % 2)
    { //ODD
        while (numbers.back()%2)
        {
            numbers.pop_back();
        }
    }
    else
    { //EVEN
        while (!(numbers.back()%2))
        {
            numbers.pop_back();
        }
    }
    cout << numbers.size();
}