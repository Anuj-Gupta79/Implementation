#include <bits/stdc++.h>
using namespace std;

pair<int, int>get_index(string s)
{
    int max_count = 0;
    int count = 1;
    int i;
    pair<int, int> index;
    for (i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == '1'){
            count++;
            if(i==s.size()-2){
                index.first = i - count +2;
                index.second = i+1;

            }
        }
     
        else
        {
            if (count > max_count)
            {
                if(count==1)
                {
                    index.first = i;
                    index.second = i;
                }
                else
                {
                    index.first = i - count+2;
                    index.second = i+1;
                }
                max_count = count;
                count =  1;
            }
        }
    }
    return index;
}

int max_count(string s)
{
    int maxi_count = INT_MIN;
    int count = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == '1')
            count++;
        else{
            maxi_count = max(maxi_count, count);     
            count = 1;   

        }
    }
    return maxi_count;
}

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    pair<int, int> index = get_index(s);
    if(index.second==s.size()-1){
        cout<<s.size();
        return 0;
    }
    if ((s.size() - index.second + 1) >= k)
    {
        for (int i = index.second+1; i <= k; i++)
            s[i] = '1';
    }
    else
    {
        for (int i = index.first-k; i < index.first; i++)
            s[i] = '1';
    }
    int count = max_count(s);
    cout << count << endl;
    return 0;
}