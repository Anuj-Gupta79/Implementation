#include <bits/stdc++.h>
using namespace std;

bool is_sort(vector<int> arr){
    int i=0; int j=arr.size()-1;
    while(i<j){
        if(arr[i]>arr[j]){
            if((i+j+2)%2==0){
                return false;
            }
            swap(arr[i],arr[j]);
        }
        i++;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    if (is_sort(arr))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}