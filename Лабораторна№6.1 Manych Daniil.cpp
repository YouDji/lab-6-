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
	const int n=7;
	int i, d;
	double a7[n], sum=0;
	srand(time(NULL));
	printf("������� mat(%d,%d): \n",n,m);
	for(i=0;i<n;i++)
	{
	a7[i]=rand()%100/2;
	}
	cout<<"����������� ����� �["<<n<<"] = ";

	for(i=0;i<n;i++)
	{
		cout<<a7[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		if(a7[i]<0)
		sum= sum+a7[i];
	}
	cout<<endl<<"���� ="<<sum<<endl;
	system ("pause");
	return 0;
}
