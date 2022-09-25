#include<bits/stdc++.h>
using namespace std;

int get_coin(vector<int> robot, int x, int y){
    int sum = 0; int coin = 0;
    for(auto it : robot){
        if(it>=x){
            sum = -it;
            break;
        }
    }
    if(sum==0){
        coin = x-robot[robot.size()-1];
        sum = -robot[robot.size()-1];
    }
    for(auto it : robot){
        sum+=it;
    }
    if(sum>=y) coin+= 0;
    coin += y-sum;
    return coin;
}

int main(){
    int n; cin>>n;
    vector<int> robot;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        robot.push_back(x);
    }
    sort(robot.begin(),robot.end());
    int m; cin>>m;
    vector<int> coins;
    while(m--){
        int x; cin>>x;
        int y; cin>>y;
        coins.push_back(get_coin(robot,x,y));
    }
    for(auto it : coins){
        cout<<it<<endl;
    }
    return 0;
}