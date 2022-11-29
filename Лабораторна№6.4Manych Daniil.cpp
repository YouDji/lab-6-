#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main ()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int j=5;
	const int n=3;
	const int m=4;
	int c5[j];
	int a3[n];
	int d4[m];
	int i, z;
	srand(time(NULL));
	   for (i=0; i<n; i++)
	{
	a3[i]=rand()%10;
	}
	   for (i=0; i<m; i++)
	{
	d4[i]=rand()%10;
	}
	z=0;
	   for (i=0; i<m; i++)
	{
	if(0<=a3[i])
	{
       	c5[z]=a3[i];
z++;
	}
	}
	    for (i=0; i<n; i++)
	{
	if(0<=d4[i])
	{
	
	c5[z]=d4[i];
	z++;
}
    }
  	    cout<<"\n Масив c5["<<z<<"] = ";
         for (i=0;i<z;i++)
        cout<<c5[i]<<" ";
    cout<<"\n ";
    system("pause");
return 0;
	
}
