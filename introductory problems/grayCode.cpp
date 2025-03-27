#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> gray_code;
    gray_code.push_back(""); // base case

    for (int i = 0; i < n; i++)
    {
        int size = gray_code.size();
        for (int j = size - 1; j >= 0; j--)
        {
            gray_code.push_back(gray_code[j]);
        }
        size *= 2;
        for (int j = 0; j < size; j++)
        {
            if (j < gray_code.size() / 2)
            {
                gray_code[j] += "0";
            }
            else
            {
                gray_code[j] += "1";
            }
        }
    }

    for (int i = 0; i < gray_code.size(); i++)
    {
        cout << gray_code[i] << endl;
    }
}

/*

--> Initial State (n=0):

gray_code = [""]  // Base case

--> First Iteration (i=0, 1-bit Gray code):

gray_code = ["", ""]  // Step 1: Mirror
gray_code = ["0", "1"]  // Step 2: Add 0s and 1s

--> Second Iteration (i=1, 2-bit Gray code):

gray_code = ["0", "1", "1", "0"]  // Step 1: Mirror
gray_code = ["00", "01", "11", "10"]  // Step 2: Add 0s and 1s

*/