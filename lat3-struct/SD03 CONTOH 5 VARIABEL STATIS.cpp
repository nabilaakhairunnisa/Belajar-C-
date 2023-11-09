#include<iostream> 
#include<stdlib.h> 

using namespace std;

int main(void) 
{ 
	int *P;
	P=(int *)malloc(sizeof(int)); 
	*P=25; 
	cout<<*P<<endl; 
} 

