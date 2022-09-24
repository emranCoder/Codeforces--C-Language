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
    int arr[3];
    int i,n=3;
    rc(i,n)
    {
        cin >> arr[i];
    }
    sort(arr,arr+3);
    cout << arr[2]-arr[0] << endl;

}

int main()
{
 solve();
    return 0;
}
