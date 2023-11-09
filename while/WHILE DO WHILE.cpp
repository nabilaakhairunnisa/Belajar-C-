#include<iostream>
using namespace std;
int main()
{
	int i=9;		//inisialisasi
	while (i>0)		//cek kondisi
	{	
		cout<<"While "<<i<<endl;
		i--;		//ubah kondisi
	}
	i=5;			//inisialisasi
	do
	{
		cout<<"do-while "<<i<<endl;
		i--;		//ubah kondisi
	}
	while (i>0);	//cek kondisi
}
