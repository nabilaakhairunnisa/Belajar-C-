#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char A[15];
	char B[15];
	cout<<"Masukan kata 1 : ";cin>>A;
	cout<<"Masukan kata 2 : ";cin>>B;
	if(strcmp(A,B) == 0) // fungsi strcmp untuk membandingkan string A dan B
		cout<<"Kata 1 dan Kata 2 sama"<<endl;
	else
		cout<<"Kata 1 dan Kata 2 tidak sama"<<endl;
	return 0;
}
