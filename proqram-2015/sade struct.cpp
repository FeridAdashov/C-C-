#include<iostream>
#include<cstring>
using namespace std;
struct kitab{
	int qiymet;
	char ad[20];
	char muellif[20];
};
int main(){
	kitab vesait;
	strcpy(vesait.ad,"ANALIZ ;-)");
	strcpy(vesait.muellif,"ELSAD");
	vesait.qiymet=5;
	cout<<"vesaitin adi: "<<vesait.ad;
	cout<<"\nvesaitin muellifi: "<<vesait.muellif;
	cout<<"\nvesaitin qiymeti: "<<vesait.qiymet;
	return 0;
}
