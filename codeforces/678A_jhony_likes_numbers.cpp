#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,k,value;
    cin>>n>>k;
    x=n+1;
    value=x%k; //retorna um value, a diferença k-value, eh a quantidade que falta do n pro x
    if(value==0){
        cout<<x;
    }
    else{
        cout<<(k-value)+x;
    }
}