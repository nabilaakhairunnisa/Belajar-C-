#include <iostream>
using namespace std;
int main()
{
	int A[3][2] = {{2, 3},{2, 2},{1, 4},};
	int B[2][3] = {{3, 3, 3},{1, 1, 1},};
	int hasil[3][3];
	cout << "Perkalian dua matriks yang diberikan adalah :\n" << endl;
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			hasil[i][j] = 0;
			for (int k = 0; k < 2; k++) 
			{ hasil[i][j] += A[i][k] * B[k][j];	}
			cout << hasil[i][j] << "\t";
		}
		cout << endl;
	}
}
