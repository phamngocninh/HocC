#include<iostream>
#include<string.h>
using namespace std;

struct person{
	char ten[30];
	int tuoi;
};
int main(){
	person p;
	cout << "Nhap ten: ";
	gets(p.ten);
	cout << "Nhap tuoi: ";
	cin >> p.tuoi;
	cout << p.ten <<" "<<p.tuoi ;
}
