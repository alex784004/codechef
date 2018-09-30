#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	int a;
	char b[100];
	char ab[100];
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>b;
		int k=strlen(b);
		for(int j=0;j<k;j++)
		{
		int kh=(int)b[j];//117
		
		int ch=kh%26;
		kh=kh-97;
		ch=(ch+kh)%26;
	    b[j]=(char)(ch+97);
		
	}
		cout<<b<<"\n";
		
}
	return 0;
}
