#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    string input;
    vector<char> numbers;

    cin >> input;

    for (int i = 0; i < input.size(); i+=2)
    {
        numbers.push_back(input[i]);
    }
    sort(numbers.begin(),numbers.end());
    for (int i = 0; i < numbers.size()-1; i++)
    {
        cout << numbers[i] << "+";
    }
    cout << numbers.back();
}