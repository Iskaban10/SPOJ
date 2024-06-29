#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(ll n)
{
    ll c=0;
    while(n>0)
    {
        c=c+n/5;
        n=n/5;
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cin >> t;
    ll x;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        solve(x);
    }
    return 0;
}