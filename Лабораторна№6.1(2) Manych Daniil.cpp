#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    const int max= 7;
    int a7[max];
    int i;
    int sum;
    sum= 0;
    srand(time(NULL));
    
    for(int i=0; i<max; i++)
    {
    	a7[i]=rand()%100;
    }
    cout<<"Сформований масив А["<<max<<"] = ";
    	for(int i=0;i<max;i++)
	{
		cout<<a7[i]<<" ";
	}
    for( int i=0 ; i<max ; i++)
    {
    	if(a7[i]%2)
    	sum+=a7[i];
	}
    cout<<endl<<"Сума ="<<sum<<endl;
    return sum;
}
