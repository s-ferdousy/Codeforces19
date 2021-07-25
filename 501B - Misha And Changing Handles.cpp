#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<pair<string, string>> requests(n);
    set<string> names;
    map<string, string> newToOld;

    for(int p = 0; p < n; p++)
    {
        string original, requested;
        cin >> original >> requested;

        if(names.count(requested))
        {
            continue;
        }
        names.insert(original);
        names.insert(requested);

        if(newToOld.count(original) > 0)
        {
            string oldOriginal = newToOld[original];
            newToOld.erase(original);
            newToOld.insert(pair<string, string>(requested, oldOriginal));
        }
        else
        {
            newToOld.insert(pair<string, string>(requested, original));
        }
    }

    cout << newToOld.size() << endl;
    for(map<string, string>::iterator mapIter = newToOld.begin(); 
    mapIter != newToOld.end(); mapIter++)
    {
        cout << mapIter->second << " " << mapIter->first << endl;
    }

    return 0;
}
