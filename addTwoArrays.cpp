// Add Two Arrays Problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int i = 1, j = 2;

    vector<int> a = {3, 3};
    vector<int> b = {5, 5, 1};
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // First Case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Second Case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // Third Case
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans.begin(), ans.end());
    // Printing the result
    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }

    return 0;
}