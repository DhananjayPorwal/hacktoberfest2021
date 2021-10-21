#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

    int arr[] = {1, 4, 5, 3, 4};

    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]) - 1;

        if (arr[index] < 0)
            ans.push_back(index + 1);
        else
            arr[index] = -arr[index];
    }

    ans.shrink_to_fit();
    return ans;
}