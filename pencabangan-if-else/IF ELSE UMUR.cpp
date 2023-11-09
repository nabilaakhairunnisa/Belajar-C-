#include <iostream>
using namespace std;
int main()
{
	int umur;
	cout<<"  Masukan umur kamu : ";cin>>umur;
	if (umur<=10)
		cout<<"  Kamu termasuk usia anak";
	else if (umur<18)
		cout<<"  Kamu termasuk usia remaja";
	else if (umur<=35)
		cout<<"  Kamu termasuk usia dewasa";
	else if (umur<=65)
		cout<<"  Kamu termasuk usia paruh baya";
	else 
		cout<<"  Kamu termasuk usia lansia";
}


