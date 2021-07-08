#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,cnt=0,num;
    num = rand();

    for(i=0;i<3;i++){
        if(num % 2 == 1)cout << "coin is head" << endl;
        else {cout << "coin is tail" << endl;
        cnt++;}
    }

    cout << "head : " << (3-cnt) << "times tail : " << cnt << "times"<< endl;

    return 0;
}
