#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
string encrypt(string str,int key)
{
	const int col=str.length();
	const int row=key;
	char arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr[i][j]='*';
		}
	}
	cout << "\nCreated array:\n\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	bool flag=false;
	int r=0;
	for(int i=0;i<col;i++)
	{
		if(r==0 ||r == key-1)
		{
			flag=!flag;
		}
		arr[r][i]=str[i];
		flag?r++:r--;
	}
	cout << "\n\nConstructed matrix:\n\n";
	string result;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout << arr[i][j] << " ";
			if (arr[i][j]!='*')
			{
				result.push_back(arr[i][j]);
			}
		}
		cout << "\n";
	}
	cout << "\nEncrypted text:";
	cout << result;
	return result;
}
void decrypt(string val,int key)
{
	char arr[key][val.length()];
	for(int i=0;i<key;i++)
	{
		for(int j=0;j<val.length();j++)
		{
			arr[i][j]='#' ;
		}
	}
	cout << "\n\n Constructed Matrix:\n\n";
	for(int i=0;i<key;i++)
	{
		for(int j=0;j<val.length();j++)
		{
			cout << arr[i][j];
		}
		cout << "\n";
	}
	int r=0;
	bool dir=false;
	for(int i=0;i<val.length();i++)
	{
		if(r==0 || r==key-1)
		{
			dir=!dir;
		}
		arr[r][i]='*';
		dir?r++:r--;
	}
	cout << "\n\n Newly formed matrix:\n\n";
	for(int i=0;i<key;i++)
	{
		for(int j=0;j<val.length();j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n\n";
	int k=0;
	for(int i=0;i<key;i++)
	{
		for(int j=0;j<val.length();j++)
		{
			if (arr[i][j]=='*')
			{
				arr[i][j]=val[k];
				k++;
			}
			cout << arr[i][j] << " " ;
		}
		cout << "\n";
	}
	
	bool flag=false;
	int row=0;
	string res;
	for(int i=0;i<val.length();i++)
	{
		if(row==0||row==key-1)
		{
			flag=!flag;
		}
		if(arr[row][i]!='#')
		{
			cout << arr[row][i];
			res.push_back(arr[row][i]);
		}
		flag?row++:row--;
	}
	cout << "\n\n Result:" << res;
	//return res;
	
}
int main()
{
	string str;
	cout << "\nEnter the data:";
	cin >> str;
	cout << "\nEntered data:";
	cout << str;
	int key;
	cout << "\nEnter the key size:";
	cin >> key;
	string val=encrypt(str,key);
	cout << "\n\n***********************\n\n";
	cout << "\n\nDecryption Process:";
	decrypt(val,key);
	return 0;
}


