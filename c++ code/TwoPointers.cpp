#include <bits/stdc++.h>
using namespace std;

void two_pointers(vector<int> arr, int target)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            cout << i + 1 << " " << j + 1 << endl;
            break;
        }
        else if (arr[i] + arr[j] < target)
            i++;
        else
            j--;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int target;
    cin >> target;
    two_pointers(arr, target);
    return 0;
}