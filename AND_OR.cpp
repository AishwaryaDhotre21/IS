#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char str1[]="Hello world";
	const int len=strlen(str1);
	//cout << len;
	char str2[len];
	char str3[len];
	char str4[len];
	cout << "\nAND Operation:\n\n";
	for(int i=0;i<len;i++)
	{
		str2[i]=str1[i]&&127;
		cout << str2[i] << " ";
	}
	cout << "\n\n\nOR Operation:\n\n";
	for(int i=0;i<len;i++)
	{
		str3[i]=str1[i] | 127;
		cout << str3[i] << " ";
	}
	cout << "\n\n\nXOR Operation:\n\n";
	for(int i=0;i<len;i++)
	{
		str4[i]=str1[i] ^ 127;
		cout << str4[i] << " ";
	}
	
	return 0;
}


