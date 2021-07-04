#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a,b,c,d;
    long output=0;
    cin>>a>>b>>c>>d;
    if(a==b){
        ++output;
    }
    if(a==c||b==c){
        ++output;
    }
    if(b==d||c==d||a==d){
        ++output;
    }
    cout << output << endl;
    return 0;
}
