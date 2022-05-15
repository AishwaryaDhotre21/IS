#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char str[]="Hello world";
	char str1[11];
	char str2[11];
	int i,len;
	len=strlen(str);
	cout << len << "\n";
	for(int i=0;i<len;i++)
	{
		str1[i]=str[i] & 127;
		cout << str1[i] << "==";
		str1[i]=str1[i] | 127;
		cout << str1[i] << "\n";
	}
	cout << "\n\nStrig1 AND-OR Operation = " << str1 << "\n\n";
	for(int i=0;i<len;i++)
	{
		str2[i]=str[i] ^ 127;
		cout << str[i] << "==" << str2[i] << "\n";
	}
	cout << "\n\n\n";
	for(int i=0;i<len;i++)
	{
		cout << str2[i];
	}
	
	return 0;
}
