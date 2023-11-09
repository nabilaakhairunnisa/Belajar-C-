#include<iostream>
#include<iomanip>
using namespace std;

struct karyawan_str
{
	char name[25], status;
	long int gaji;
	int anak;
};

int main()
{
	karyawan_str karyawan[30];
	int loop;
	char ulangi='y';
	int jk=0;
	
	for(loop=1; loop<30 && ulangi=='y'; loop++)
	{
		cout<<"Masukkan Nama Karyawan : ";
		cin.getline(karyawan[loop].name,80,'\n');
		cout<<"Gaji Per-bulan : Rp.";
		cin>>karyawan[loop].gaji,80,'\n';
		cout<<"Status Menikah (y/t) : ";
		cin>>karyawan[loop].status,80,'\n';
		if (karyawan[loop].status=='y')
		{
			cout<<"Jumlah anak : ";
			cin>>karyawan[loop].anak;
		}
		jk++;
		cout<<"Tambah Data Lagi? (y/t) : ";
		cin>>ulangi;
		cin.ignore(80,'\n');
		cout<<endl;
	 }
	cout<<"\n\n\t\t\t\tDATA KARYAWAN\n";
	cout<<"________________________________________________________________________\n";
	cout<<"NO\tNama Karyawan\t\tGaji\t\tStatus\t\tAnak\n";
	cout<<"________________________________________________________________________\n";
	for(loop=1; loop<=jk; loop++)
	{  
		cout<<loop<<setw(20)<<karyawan[loop].name<<setw(15)<<karyawan[loop].gaji<<setw(20);
		if (karyawan[loop].status=='y')
			cout<<"Menikah\t\t   "<<karyawan[loop].anak<<endl;
		else 
			cout<<"Belum Menikah\n";  
	}
	cout<<"________________________________________________________________________\n";
}
