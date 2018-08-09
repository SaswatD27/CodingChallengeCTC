#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void decipher(char A[])
{
	int a=strlen(A);
	int count=0,i,j,f,fac[60],k;
	for(i=1,j=0;i<=a;i++)
	{
		if(a%i==0)
		{
			cout<<endl<<"Factor Found : "<<i;
			count++;
			fac[j]=i;
			j++;
		}
	}
	cout<<endl<<"No. of factors found - "<<count;
	for(j=0;j<count;j++)
	{
		f=fac[j];
		cout<<"Solution No. - "<<j+1<<endl;
		for(k=0;k<f;k++)
		{
			for(i=0;A[i]!=NULL;i++)
			{
				if(i%f==k)
				cout<<A[i];
			}
			cout<<endl;
		}
	}
	cout<<"That's all folks!!!";
}
int main()
{
	char A[2000];
	cout<<"Enter encrypted string - ";
	gets(A);
	decipher(A);
}
