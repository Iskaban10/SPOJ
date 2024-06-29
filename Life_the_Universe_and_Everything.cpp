#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    vector<int> v;
    int x;
    do
    {
       cin>>x;
       v.push_back(x);
    }
    while(x!=42);
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]!=42)
        cout<<v[i]<<endl;
        else
        return;
    }
}
int main()
{
    solve();
    return 0;
}