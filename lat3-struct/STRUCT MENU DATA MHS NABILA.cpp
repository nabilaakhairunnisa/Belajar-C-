//Nama 		: Nabila Khairuunisa
//NIM 		: 211011400012
//Kelas 	: 02TPLP001

#include <iostream>
using namespace std;
int i;
int j;

struct mhs
{
	int  NIM;
	string Nama;
	short ThnMasuk;
};

mhs m [6] = { {110, "BUDI ", 2000}, {107, "SUSAN", 1999}, {142, "WAWAN", 2001},
			  {205, "ENDI ", 2002}, {104, "HANIF", 1999}, {108, "YUDI ", 1999} };

void TampilSemuaData()		
{ 
	cout<<"*** Data Semua Mahasiswa ***\n";
	cout<<"|NIM|Nama |ThnMasuk|\n";
	for (i=0; i<6; i++)
	{
		cout<<"|"<<m[i].NIM<<"|"<<m[i].Nama<<"|"<<m[i].ThnMasuk<<"    |\n";
	}
	cout<<endl;
}

void Mencari()
{	
	int NIM;
	int tanda;
	cout<<"*** Mencari Data Mahasiswa Sesuai NIM ***\n";
	cout<<"Masukkan NIM Yang Ingin Dicari : "; cin>>NIM;
		
	for (i=0; i<6; i++)
	{
		if (NIM == m[i].NIM)
		{
			cout<<"Data Mahasiswa Yang Anda Cari : \n";
			cout<<"|NIM|Nama |ThnMasuk|\n";
			cout<<"|"<<m[i].NIM<<"|"<<m[i].Nama<<"|"<<m[i].ThnMasuk<<"    |\n";
			tanda = 1;
		}
	}
	if (tanda !=1)
	{
		cout<<"Data Mahasiswa Yang Anda Cari Tidak Ada.\n";
	}
	cout<<endl;
}

void UrutAscending(struct mhs m[])
{
	cout<<"*** Mengurutkan Data Mahasiswa Ascending ***\n";
	struct mhs temp;
	for (i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if (m[i].NIM > m[j].NIM)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;	
			}
		}
	}
	TampilSemuaData();
}

void UrutDescending(struct mhs m[])
{
	cout<<"*** Mengurutkan Data Mahasiswa Descending ***\n";
	struct mhs temp;
	for (i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if (m[i].NIM < m[j].NIM)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;	
			}
		}
	}
	TampilSemuaData();
}

void UbahNama()
{
	TampilSemuaData();
	int NIM;
	string Nama;
	bool selesai = true;
	cout<<"*** Mengubah Nama Mahasiswa ***\n";
	cout<<"Masukkan NIM Mahasiswa Yang Ingin Diganti Namanya : "; cin>>NIM;
		
	for (i=0; i<6; i++)
	{
		if (NIM == m[i].NIM)
		{
			cout<<"Masukkan Nama Mahasiswa Yang Baru : "; cin>>m[i].Nama;
			cout<<"Data Mahasiswa Yang Anda Ganti : \n";
			cout<<"|NIM|Nama |ThnMasuk|\n";
			cout<<"|"<<m[i].NIM<<"|"<<m[i].Nama<<"|"<<m[i].ThnMasuk<<"    |\n";
			selesai = false;
		}
	}
	if (selesai)
	{
		cout<<"Data Mahasiswa Yang Anda Cari Tidak Ada.\n";
	}
	cout<<endl;
}

void Pilihan (int pil)
{
	switch (pil)
	{
		case 1:
			TampilSemuaData(); 	
			break;
		case 2:
			Mencari(); 			
			break;
		case 3:
			UrutAscending(m); 	
			break;
		case 4:
			UrutDescending(m); 	
			break;
		case 5:
			UbahNama(); 								
			break;
		case 6:
			cout<<"Terima Kasih\n"; 	
			break;
		default:
			cout<<"Pilihan Salah\n\n";
		}
}

int main()
{
	int pil;
	do 
	{
		cout<<"*** MENU *** \n";
		cout<<"1. Tampil Semua Data \n";
		cout<<"2. Mencari \n";
		cout<<"3. Urut Ascending \n";		
		cout<<"4. Urut Descending \n";
		cout<<"5. Ubah Nama \n";
		cout<<"6. Berhenti \n";
		cout<<"\nMasukkan Pilihan : "; cin>>pil;
		cout<<endl;
		Pilihan (pil);
	}
	while (pil != 6);
}
