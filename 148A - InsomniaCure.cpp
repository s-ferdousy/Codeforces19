#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n; 
    scanf("%d\n%d\n%d\n%d\n", &k, &l, &m, &n);
    int d; 
    scanf("%d\n",&d);
    int total = 0;
    for(int u = 1; u <= d; ++u)
    {
        if( u % k == 0 || u % l == 0 || u % m == 0 || u % n == 0)
        {
            ++total;
        }
    }
    printf("%d\n",total);
    return 0;
}
