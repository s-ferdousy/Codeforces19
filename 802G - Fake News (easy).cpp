#include <bits/stdc++.h>
using namespace std;
int main()
{

    const string t("heidi");
    string s;
    cin >> s;
    bool fake(false);
    long ind(0);
    for(long p = 0; p < s.size(); p++)
    {
        if(s[p] == t[ind])
        {
            ++ind;
        }
        if(ind >= t.size())
        {
            fake = true;
            break;
        }
    }

    cout << (fake ? "YES" : "NO") << endl;

    return 0;
}
