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
    int x;
    cin >> x;
    char name[]="Timru";
    string a;
    cin >> a;
    int i,n=x;
    int is=0;
    sort(a.begin(),a.end());

    rc(i,n)
    {
        if(a[i]==name[i])
        {
            is++;
        }
    }
    if(is==5 && x==5) cout << "Yes" << endl;
    else cout << "No" << endl;

}

int main()
{
    e_tc()
    {
        solve();
    }
    return 0;
}
