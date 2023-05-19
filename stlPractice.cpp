#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // cout << v.capacity();
    // cout << v.size();
    // v.pop_back();
    // cout << v.capacity();
    // cout << v.size();
    // for (int i : v)
    // cout << endl
    //  << i << endl;
    // cout << v.at(0);

    map<int, string> m;
    m[0] = "avi";
    m[4] = "shoot";
    m[3] = "aim";
    m[2] = "load";
    m.insert({5, "!"});
    m.insert({6, "@"});

    for (auto j : m)
    {
        cout << j.first << ": " << j.second << endl;
    }

    cout << m.count(5) << endl;
    m.erase(2);
    for (auto j : m)
    {
        cout << j.first << ": " << j.second << endl;
    }

    cout << "-------------" << endl;
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).second;
    }

    cout << endl
         << "+++++++++++++++++" << endl;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << binary_search(v.begin(), v.end(), -1);
    cout << binary_search(v.begin(), v.end(), 2);
    cout << endl
         << *v.begin();

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << abcd;

    rotate(v.begin(), v.begin() + 1, v.end());
    for (auto k : v)
    {
        cout << k << endl;
    }

    cout << "@@@@@@@@@@@@@@@@@" << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    rotate(arr + 1, arr + 2, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}