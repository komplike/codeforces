#include<iostream>
#include<vector>

using namespace std;

#define MAX_STRING 101

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    char input[MAX_STRING];
    short int inputLength;
    bool toChange = true, toLower = false;
    cin.getline(input,MAX_STRING);

    if (input[0]<97) toLower = true;

    for (inputLength = 1; input[inputLength] != '\0'; inputLength++)
    {
        if (input[inputLength] > 96)
        {
            toChange = false;
        }
    }
    if (toChange)
    {
        if (toLower)
        {
            for (int i = 0; i < inputLength; i++)
            {
                input[i]+=32;
            }      
        }
        else
        {
            input[0]-=32;
            for (int i = 1; i < inputLength; i++)
            {
                input[i]+=32;
            }    
        }
    }
    for (int i = 0; i < inputLength; i++)
    {
        cout << input[i];
    }
    
}