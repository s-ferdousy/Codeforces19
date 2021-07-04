#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string input;
    cin>>input;
    char a;
    set<char> b;
    for(int i=0; i<input.size(); i++){
        a = input[i];
        if('A' <= a && a <= 'Z'){
            a += 'a'-'A';
        }
        b.insert(a);
    }
    puts(b.size() == 26 ? "YES" : "NO");

    return 0;
}
