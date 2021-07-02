#include <bits/stdc++.h>
using namespace std;

int main(){
    int numberOfRooms, p, q;
    cin>>numberOfRooms;

    int output = 0;
    while(numberOfRooms>0){
        cin>>p>>q;
        if(q-p>=2){
            output++;
        }
        numberOfRooms--;
    }
    cout<<output;
    return 0;
}
