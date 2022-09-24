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
    int n;
    cin >> n;
    if (n%2==0)
    {
        cout << "4" << " " << n-4 << endl;
    }
    else
    {
        cout << "9"<< " " << n-9 << endl;
    }
}


int main()
{

    solve();
    return 0;
}
