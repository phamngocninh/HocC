#include<iostream>;
using namespace std;

int main() {
	int x;
	
	cout <<"Nhap gia tri x: ";
	cin >> x;
	if(x>=0) goto nhap;
	
	cout << "Gia tri x da nhap la: "<<x;
	nhap:
	return 0;
}
