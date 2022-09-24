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
     string s;
     cin >> s;
     int i,n=s.size();
     rc(i,n)
     {
         s[i]=tolower(s[i]);
     }
     if(s == "yes")
     {
         cout << "YES" << endl;
     }else
     {
         cout << "NO" << endl;
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
