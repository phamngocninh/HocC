#include<iostream>
using namespace std;
int main(){
	int a;
	float t;
	do {
		cout<<"nhap thang: ";cin>>a;
		if(a<=0 || a>12) cout<<"nhap lai thang(1-12) "<<endl;
	} while(a<=0 || a>12);
	t=1.0*a/3;
	if(t>0 && t<=1) cout<<"Day la thang cua quy 1";
	if(t>1 && t<=2) cout<<"Day la thang cua quy 2";
	if(t>2 && t<=3) cout<<"Day la thang cua quy 3";
	if(t>3 && t<=4) cout<<"Day la thang cua quy 4";
}
