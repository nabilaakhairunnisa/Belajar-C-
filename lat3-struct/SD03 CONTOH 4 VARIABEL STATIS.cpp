#include<iostream> 
#include<stdlib.h>

using namespace std;
 
int main(void) 
{ 
	typedef struct{ 
	int No; 
	int Nilai; 
}strNode; 

strNode *P; 
P=(strNode*)malloc(sizeof(strNode)); 
P->No=25; 
P->Nilai=87; 
cout<<"No = "<<P->No<<endl; 
cout<<"Nilai = "<<P->Nilai<<endl; 

} 

