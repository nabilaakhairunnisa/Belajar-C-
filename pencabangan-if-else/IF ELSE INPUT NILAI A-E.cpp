#include <iostream>
using namespace std;
int main()
{
  char nilai;
  cout<<"Input Nilai Anda (A - E): "; cin>>nilai;
  if (nilai == 'A' ) 
  	cout<<"Pertahankan!";
  else if (nilai == 'B' ) 
  	cout<<"Harus lebih baik lagi";
  else if (nilai == 'C' ) 
  	cout<<"Perbanyak belajar";
  else if (nilai == 'D' ) 
 	 cout<<"Jangan keseringan main";
  else if (nilai == 'E' ) 
 	 cout<<"Kebanyakan bolos...";
  else 
  	cout<<"Maaf, format nilai tidak sesuai" << endl;
  return 0;
}
