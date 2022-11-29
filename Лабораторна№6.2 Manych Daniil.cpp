#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<time.h>
using namespace std;
int main ()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n=4;
	int Mas[n];
	int i, min, id;
	srand(time(NULL));
	for(int i=0; i<n; i++)
    {
    	Mas[i]=rand()%100;
    }
    for(int i=0; i<n; i++)
	{
		cout<<Mas[i]<<" ";
	}
	for(i=0; i<n ; i++)
	{
	
	 min=Mas[0];
	 id=0;
	 if (Mas[i]%2==0)
	 if(Mas[i]<min)
	 {
	 	min= Mas[i];
	 	id=1;
	 }
}
	 printf(" Min елемент Mas [%d]=%d",id+1,min,i);
}

 

