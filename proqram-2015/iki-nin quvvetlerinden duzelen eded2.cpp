#include<iostream>
#include<cmath>
using namespace std;
int say(int n){
	int k=0;
	while(n>0){
		k++;
		n/=10;
	}return k;
}
int sert(int n){
	int k=0;
	while(k!=1 && n!=1){
		k=n%2;
		n/=2;
	} return k;
}
int quvvet(int n){
	int k=0;
	while(n!=1){
		n/=2;
		k++;
	} return k;
}
int main(){
	int n,k,t;
	cin>>n;
   	while(sert(n)==1 && n!=2){
   	k=say(n)-1;
   	t=pow(10,k);
   	n=n-(n-n%t);
	   }
	cout<<quvvet(n);
	return 0;
}
