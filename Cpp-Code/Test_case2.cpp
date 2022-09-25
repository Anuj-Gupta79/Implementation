#include <bits/stdc++.h>

using namespace std;

int countSwaps(vector<int> a) {
    int count=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]); count++;
            }
        }
    }
    return count;
}

int main(){
    int n; cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    cout<<"Array is sorted in "<<countSwaps(a)<<" swaps."<<'\n';
    cout<<"First Element: "<<a[0]<<'\n';
    cout<<"Second Element: "<<a[a.size()-1]<<'\n';
    return 0;
}