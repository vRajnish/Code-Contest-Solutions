#include <iostream>

using namespace std;


int main(){
    int a[3], b[3], i, ca = 0, cb = 0;
    for(i=0; i<3; i++)
        cin>>a[i];
    for(i=0; i<3; i++)
        cin>>b[i];
    for(i=0; i<3; i++) {
        if(a[i] > b[i])
            ca++;
        else if(a[i] < b[i]) {
            cb++;
        }
    }
    cout<<ca<<" "<<cb;
    return 0;
}
