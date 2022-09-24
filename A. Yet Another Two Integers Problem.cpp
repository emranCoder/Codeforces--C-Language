#include <iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
#include <math.h>
#define e_tc() int t; cin >> t; while (t--)
#define rc(i,n) for(int i=0; i<n; i++)
#define ll long long

using namespace std;

void solve()
{
    int a,b,c=0,f=0;

    cin >> a >> b;
    c=abs(a-b);

    if(a!=b && c%10!=0)
    {
        c-=c%10;
        cout << 1+(c/10) << endl;
    }
    else
    {
        cout << (c/10) << endl;
    }



}

int main()
{
    e_tc()
    {
        solve();
    }
    return 0;
}
