#include <iostream>
using namespace std;
int main()
{
	char OE;
	cout<<"Ganjil / Genap (O/E) : "; cin>>OE;
	switch(OE)
	{
		case 'E': case 'e':
			cout<<"Anda memilih Genap."<<endl;break;
		case'O': case'o':
			cout<<"Anda memilih Ganjil."<<endl;break;
		default:
			cout<<"Pilihan salah"<<endl;
	}
	int N, i, jd=0, jml=0, mulai;
	cout<<"Masukan angka : "; cin>>N;
	cout<<"Angka yang anda masukan : "<<N<<endl;
	if (OE=='E'||OE=='e') mulai=2; //genap dimulai dari 2
	else mulai=1;				  //ganjil dimulai dari 1
	for (int i=mulai; i<=N; i+=2)
	{jd+=i;}
	cout<<"Jumlah deret dari "<<N<<" = "<<jd;	
}





