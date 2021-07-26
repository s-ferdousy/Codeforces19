#include <bits/stdc++.h>
using namespace std;

int main()
{

    const int maxN = 3002;
    bool tests[maxN] = {0};

    int n=0;
    cin>>n;
    for(int k = 0; k < n; k++)
    {
        int temp;
        cin>>temp;
        tests[temp] = 1;
    }

    for(int index = 1; index < maxN; index++)
    {
        if(!tests[index])
        {
            printf("%d\n", index);
            break;
        }
    }
    return 0;
}
