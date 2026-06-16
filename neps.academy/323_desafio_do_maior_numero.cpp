#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,maior=0;
    cin>>x;
    while(x!=0){
        if(x>maior){
            maior=x;
        }
        cin>>x;
    }
    cout<<maior;
    return 0;
}