#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x;
    cin>>x;

    if(x < 0)
    {
        x = -x;
    }

    long sum=0, ans=0, j=0;
    for (j = 1; sum < x; ans++){
        sum += j;
        j++;
    }

    long diff = sum - x;

    if(x == 0)
    {
        cout<<"0";
    }
    else if(diff % 2 == 0)
    {
        cout<<ans;
    }
    else if((diff + j) % 2 == 0)
    {
        cout<<ans + 1;
    }
    else
    {
        cout<<ans + 2;
    }
    return 0;
}
