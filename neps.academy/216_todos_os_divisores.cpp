#include <bits/stdc++.h>
using namespace std;

int main(){
    int number,dividers,i=1; //we must include the number in the dividers, so 0<i<=number
    cin>>number;

    while(i<=number){
        if(number%i==0){
            cout<<i<<" ";
        }
        i++;
    }

    return 0;
}