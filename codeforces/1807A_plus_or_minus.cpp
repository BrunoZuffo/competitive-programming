#include <bits/stdc++.h>
using namespace std;

int main(){
    int cont=0,t,a,b,c;
    cin>>t;
    while(cont<t){
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<'+'<<endl;
        }
        else{
            cout<<'-'<<endl;
        }
        cont++;
    }
    return 0;
}