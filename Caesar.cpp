#include <string>
#include <iostream>
using namespace std;
int main()
{
	int i,j,k;
	char m[10000];
	cout<<"please input simple as m:";
	gets(m);
	cout<<"请选择你是加密还是解密，0代表加密，1代表解密:";
	cin>>j;
	cout<<"你选择的是"<<j<<endl;
	if(j==0)
	{
		cout<<"未加密时的明文为:"<<m<<endl;
		cout<<"请输入加密密钥:";
		cin>>k;
		cout<<"加密密钥为:"<<k<<endl;
	   for(i=0;i<strlen(m);i++)
	   {
		if(m[i]<='z'&&m[i]>='a')
		{
			cout<<(char)((m[i]-'a'+k)%26+'a');
		}
		else if(m[i]<='Z'&&m[i]>='A')
		{
			cout<<(char)((m[i]-'A'+k)%26+'A');
		}
		else if(m[i]<=9&&m[i]>=0) 
		{
			cout<<((m[i]+k)%26);
		}
		else
			cout<<m[i];
	   }
	   cout<<endl;
	}
	else 
	{
		cout<<"加密后的密文为:"<<m<<endl;
		cout<<"请输入解密密钥:";
		cin>>k;
		cout<<"解密密钥为:"<<k<<endl;
		for(i=0;i<strlen(m);i++)
		{
			if(m[i]<='z'&&m[i]>='a')
			{
				cout<<(char)((m[i]-'a'+26-k)%26+'a');
			}
			else if(m[i]<='Z'&&m[i]>='A')
			{
				cout<<(char)((m[i]-'A'+26-k)%26+'A');
			}
			else if(m[i]<=9&&m[i]>=0) 
			{
				cout<<((m[i]-k)%26);
			}
			else
				cout<<m[i];
		}
		cout<<endl;
	}
}
