#include <bits/stdc++.h>
using namespace std;

int main(){

    int IA,IB,FA,FB,C1=0,C2=0,cont=0;
    cin>>IA>>IB>>FA>>FB;

    if(IA!=FA&&IB!=FB){
        cont++;
        cout<<cont;
    }

    if(IA==FA&&IB!=FB){
        cont++;
        cont++;
        cout<<cont;
    }

    if(IA!=FA&&IB==FB){
        cont++;
        cout<<cont;
    }

    if(IA==FA&&IB==FB){
        cout<<cont;
    }

    return 0;
}