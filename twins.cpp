#include <bits/stdc++.h>
using namespace std;

void tCount(string s , int n , int i, int& count){
    if(i >= n) return;
    
    if(s[i] == s[i-2]){
        count ++;
    }

    tCount(s,n,i+1,count);
}

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int count = 0;
    tCount(s,n,2,count);
    cout<<count;

    return 0;
}
