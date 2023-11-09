#include<iostream>
using namespace std;
main()
{
	float awal = 20, akhir=70, dx, LuasTotal;
	float Luasdx, X, Y;
	dx = (akhir-awal)/50;
	LuasTotal= 0;
	while(awal<akhir)
	{
		X = awal+(0.5*dx);
		Y=X;
		Luasdx = Y * dx;
		LuasTotal = LuasTotal + Luasdx;
		awal = awal + dx;
	}
	cout<<"Luas Trapesium adalah : "<<LuasTotal;
}
