#include<iostream>
using namespace std;
struct kitab{
	char ad[20];
	char yazar[20];
	float qiymet;
};
int main(){int i,say;
cout<<"kitab sayini daxil edin: "; scanf("%d",say);
kitab n[say];
for(i=1;i<=say;i++){
printf("%d-ci kitabin adi: ",i); scanf("%s",&n[i].ad);
printf("Yazari: " ,n[i].yazar ); scanf("%s",&n[i].yazar);
printf("qiymeti: ",n[i].qiymet); scanf("%f",&n[i].qiymet);

}
for(i=1;i<=say;i++)
cout<<i<<"-ci kitabin adi: "<<n[i].ad<<"\nYazar: "<<n[i].yazar<<"\nqiymeti: "<<n[i].qiymet<<"\n";
	return 0;
}
