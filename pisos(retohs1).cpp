#include <bits/stdc++.h>
using namespace std;

int main(){
unsigned  int n,a,b,cont=0;
bool flag=false;
cin>>n>>a>>b;
if(a==b){
    if(n==a)flag=true;
}
else{
while(n>cont){
cont=cont+a;
if(cont==n){flag=true;break;}
else if(cont>n)break;
cont=cont-b;
}
}
if(flag)cout<<"SI\n";
else cout<<"NO\n";

return 0;
}
