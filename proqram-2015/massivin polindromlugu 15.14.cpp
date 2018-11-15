#include<iostream>
using namespace std;
int main(){
int n,i,s=0;
cout<<"massivin olcusunu gir: ";
cin>>n; int a[n];
cout<<"massivi daxil et:\n";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++){
if(i==n-1) cout<<"\nmassiv polindromdur...";
if(a[i]!=a[n-i-1]){
cout<<"\nmassiv polindrom deyil...";
break;}}
return 0;
}
