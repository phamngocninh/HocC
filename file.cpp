#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;


int main(){
	ifstream infile; 
	infile.open("person.txt");
	char ten[30];
	int tuoi;
	infile.get(ten,16);
	infile >> tuoi;
	cout << tuoi <<endl;
	infile >> tuoi;
	cout << ten <<" "<<tuoi ;
}
