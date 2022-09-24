#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
#define e_tc() int t;cin >> t; while (t--)
#define rc(i, n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int>v(n);
    rc(i,n)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int c=0;
    rc(i,n-1)
    {
        c=c+(v[n-1]-v[i]);
    }
    cout << c << endl;
}

int main()
{

    solve();
    return 0;
}
