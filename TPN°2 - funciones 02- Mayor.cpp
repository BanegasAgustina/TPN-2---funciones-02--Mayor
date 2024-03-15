#include <bits/stdc++.h>
using namespace  std ;
int EsMayor(int a,int b, int c);
int main(){
int n1 , n2, n3 , mayor;
cout<<"ingrese un numero:  ";
cin>>n1;
cout<<"ingrese un numero:  ";
cin>>n2;
cout<<"ingrese un numero:  ";
cin>>n3;
cout<<"el mayor es :  "<<EsMayor(n1,n2,n3);
return 0;
}
int EsMayor(int a,int b, int c){
int m;
if(a < b){
m = b;
}
if (b<c){
m=c;
}
if(c<a){
m=a;
}
return m;
}