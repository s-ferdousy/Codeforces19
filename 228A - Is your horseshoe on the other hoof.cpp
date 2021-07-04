#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    int output=0;
    cin>>a>>b>>c>>d;
    if(a==b){
        output++;
    }
    if(a==b||a==c){
        output++;
    }
    if(a==b||a==c||a==d){
        output++;
    }
    cout << output << endl;
    return 0;
}
