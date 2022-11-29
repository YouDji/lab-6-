#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n=4;
	int i;
	double a[n], max;
	srand(time(NULL));
	for(int i=0; i<n; i++)
    {
    	a[i]=rand()%100;
    }
	cout<<"\n Входной масив А["<<n<<"] = ";
	  	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	max=a[0];
	for(i=1; i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i]==0)
		{
			a[i]=max; 
		}
	}
	cout<<"\n Max - "<<max;
	cout<<"\n Модифицированный масив А["<<n<<"] =";
	for(i=0; i<n; i++)
	cout<<a[i]<<"\n ";
	system ("pause");
	return 0;
}
