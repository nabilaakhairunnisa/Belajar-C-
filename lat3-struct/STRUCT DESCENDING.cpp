#include <iostream>
using namespace std;

struct mhs
{
	int  NIM;
	char *Nama;
	short ThnMasuk;
};

void TampilSemuaData()
{
	mhs m[6];
	int i;
	
	m[0].NIM=110;
	m[0].Nama="BUDI ";
	m[0].ThnMasuk=2000;
	
	m[1].NIM=107;
	m[1].Nama="SUSAN";
	m[1].ThnMasuk=1999;
		
	m[2].NIM=142;
	m[2].Nama="WAWAN";
	m[2].ThnMasuk=2001;
	
	m[3].NIM=205;
	m[3].Nama="ENDI ";
	m[3].ThnMasuk=2002;
	
	m[4].NIM=104;
	m[4].Nama="HANIF";
	m[4].ThnMasuk=1999;
	
	m[5].NIM=108;
	m[5].Nama="YUDI ";
	m[5].ThnMasuk=1999;
	
	cout<<"*** Menampilkan Semua Data ***"<<endl;
	cout<<"|NIM|Nama |ThnMasuk|"<<endl;
	for (i=0; i<6; i++)
	{
		cout<<"|"<<m[i].NIM<<"|"<<m[i].Nama<<"|"<<m[i].ThnMasuk<<"    |"<<endl;
	}
	cout<<endl;
}

void Mencari()
{
	mhs m[6];
	int i;
	int flag;
	int NIM;
	char *Nama;
	short ThnMasuk;
	
	m[0].NIM=110;
	m[0].Nama="BUDI ";
	m[0].ThnMasuk=2000;
	
	m[1].NIM=107;
	m[1].Nama="SUSAN";
	m[1].ThnMasuk=1999;
		
	m[2].NIM=142;
	m[2].Nama="WAWAN";
	m[2].ThnMasuk=2001;
	
	m[3].NIM=205;
	m[3].Nama="ENDI ";
	m[3].ThnMasuk=2002;
	
	m[4].NIM=104;
	m[4].Nama="HANIF";
	m[4].ThnMasuk=1999;
	
	m[5].NIM=108;
	m[5].Nama="YUDI ";
	m[5].ThnMasuk=1999;
	
	cout<<"*** Mencari Data Mahasiswa Sesuai NIM ***"<<endl;
	cout<<"Masukkan NIM Yang Ingin Dicari : "; cin>>NIM;
	
	for (i=0; i<6; i++)
	{
		if (NIM == m[i].NIM)
		{
			NIM = m[i].NIM;
			Nama = m[i].Nama;
			ThnMasuk = m[i].ThnMasuk;
		}
	}
	cout<<"Data Mahasiswa Yang Anda Cari : \n";
	cout<<"|NIM|Nama |ThnMasuk|"<<endl;
	cout<<"|"<<NIM<<"|"<<Nama<<"|"<<ThnMasuk<<"    |"<<endl;
	cout<<endl<<endl;
}
void UrutAscending()
{
	mhs m[6];
	int NIM;
	char *Nama;
	short ThnMasuk;
	
	m[0].NIM=110;
	m[0].Nama="BUDI ";
	m[0].ThnMasuk=2000;
	
	m[1].NIM=107;
	m[1].Nama="SUSAN";
	m[1].ThnMasuk=1999;
		
	m[2].NIM=142;
	m[2].Nama="WAWAN";
	m[2].ThnMasuk=2001;
	
	m[3].NIM=205;
	m[3].Nama="ENDI ";
	m[3].ThnMasuk=2002;
	
	m[4].NIM=104;
	m[4].Nama="HANIF";
	m[4].ThnMasuk=1999;
	
	m[5].NIM=108;
	m[5].Nama="YUDI ";
	m[5].ThnMasuk=1999;
	
	cout<<"*** Mengurutkan Data Mahasiswa Sesuai NIM ***"<<endl;
	
	for (int i=0; i<6; i++)
	{
		for (int j=0; j<6; j++)
			if (m[j].NIM > m[j+1].NIM)
			{
				NIM = m[j].NIM;
				Nama = m[j].Nama;
				ThnMasuk = m[j].ThnMasuk;
				
				m[j].NIM = m[j+1].NIM;
				m[j].Nama = m[j+1].Nama;
				m[j].ThnMasuk = m[j+1].ThnMasuk;
				
				m[j+1].NIM = NIM;
				m[j+1].Nama = Nama;
				m[j+1].ThnMasuk = ThnMasuk;
			}
	}
	cout<<"Data Mahasiswa Setelah Diurutkan (Ascending) : \n";
	cout<<"|NIM|Nama |ThnMasuk|"<<endl;
	for (int k=0; k<6; k++)
	{
		cout<<"|"<<m[k].NIM<<"|"<<m[k].Nama<<"|"<<m[k].ThnMasuk<<"    |"<<endl;
	}
	cout<<endl<<endl;
}
void UrutDescending()
{
	mhs m[6];
	int NIM;
	char *Nama;
	short ThnMasuk;
	
	m[0].NIM=110;
	m[0].Nama="BUDI ";
	m[0].ThnMasuk=2000;
	
	m[1].NIM=107;
	m[1].Nama="SUSAN";
	m[1].ThnMasuk=1999;
		
	m[2].NIM=142;
	m[2].Nama="WAWAN";
	m[2].ThnMasuk=2001;
	
	m[3].NIM=205;
	m[3].Nama="ENDI ";
	m[3].ThnMasuk=2002;
	
	m[4].NIM=104;
	m[4].Nama="HANIF";
	m[4].ThnMasuk=1999;
	
	m[5].NIM=108;
	m[5].Nama="YUDI ";
	m[5].ThnMasuk=1999;
	
	cout<<"*** Mengurutkan Data Mahasiswa Sesuai NIM ***"<<endl;
	
	for (int i=0; i<6; i++)
	{
		for (int j=0; j<6; j++)
			if (m[j].NIM < m[j+1].NIM)
			{
				NIM = m[j].NIM;
				Nama = m[j].Nama;
				ThnMasuk = m[j].ThnMasuk;
				
				m[j].NIM = m[j+1].NIM;
				m[j].Nama = m[j+1].Nama;
				m[j].ThnMasuk = m[j+1].ThnMasuk;
				
				m[j+1].NIM = NIM;
				m[j+1].Nama = Nama;
				m[j+1].ThnMasuk = ThnMasuk;
			}
	}
	cout<<"Data Mahasiswa Setelah Diurutkan (Descending) : \n";
	cout<<"|NIM|Nama |ThnMasuk|"<<endl;
	for (int k=0; k<6; k++)
	{
		cout<<"|"<<m[k].NIM<<"|"<<m[k].Nama<<"|"<<m[k].ThnMasuk<<"    |"<<endl;
	}
	cout<<endl<<endl;
}
void UbahNama()
{
	cout<<"Belum Selesai"<<endl<<endl;
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
				UrutAscending(); 	
				break;
			case 4:
				UrutDescending(); 	
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
	int loop = 1;
	char ulang;
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


