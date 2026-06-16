#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i1=0,i2=0,state,count=0; //both start in 0
    cin>>n;
    while(count<n){
        cin>>state;
        if(state==1){
            if(i1==0){
                i1=1;
            }
            else{
                i1=0;
            }
        }
        else{ //state==2, so change both i1 and i2 states
            if(i1==0){
                i1=1;
            }
            else{
                i1=0;
            }
            if(i2==0){
                i2=1;
            }
            else{
                i2=0;
            }
        }

        count++;
    }
    cout<<i1<<endl<<i2;

    return 0;
}