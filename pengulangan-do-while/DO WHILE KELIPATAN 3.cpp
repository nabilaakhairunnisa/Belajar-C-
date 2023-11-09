#include <iostream>
using namespace std;
int main()
{
  int i;
  cout<<"Masukan angka : "; cin>>i;
  cout<<"Kelipatan tiga dari angaka "<<i<<" adalah : ";
  do 
  {
    cout<<i*3<<" ";
    i++;
  }
  while (i<=10);
}
