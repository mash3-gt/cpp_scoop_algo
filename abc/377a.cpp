#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // それぞれの文字が存在するか確認
    if (s.find("A") != string::npos &&
        s.find("B") != string::npos &&
        s.find("C") != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
