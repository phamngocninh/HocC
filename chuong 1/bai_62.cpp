#include<iostream>
using namespace std;
int main(){
	long long a,b,t=1;
	cout<<"Nhap a: ";cin>>a;
	cout<<"Nhap b: ";cin>>b;
	if(a%b==0 || b%a==0) {
		if(a>=b) cout<<"uoc chung lon nhat la: "<<b;
		else cout<<"uoc chung lon nhat la"<<a;
	}else {
		if(a>b){
			while(t) {
				t=a%b;
				a=b;
				b=t;
			
	} 
			cout<<"uoc chung lon nhat la: "<<a;
	} else{
		while(t) {
				t=b%a;
				b=a;
				a=t;
			
	} 
			cout<<"uoc chung lon nhat la: "<<b;
	}
}
}
