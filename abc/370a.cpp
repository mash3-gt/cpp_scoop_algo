#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    string ans;
    if (l == r)
    {
        ans = "Invalid";
    }
    else if (l == 1)
    {
        ans = "Yes";
    }
    else
    {
        ans = "No";
    }
    cout << ans << endl;
    return 0;
}