#include <iostream>
using namespace std;

int main(){
	int x=10;
	int *p;
	p=&x;
	cout<<"Nilai x: "<<x;
	cout<<"Alamat x: "<<&x;
	cout<<"Nilai p: "<<*p;
	cout<<"Alamat p: "<<&p;
}
