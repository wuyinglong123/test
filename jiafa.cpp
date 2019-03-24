#include <iostream>
#include<string>
#include<vector>
#include<iterator>
#include"BigNum.h"
using namespace std;
void Num::pluss(string a,string b)
{
	if(a.size()<b.size())
{
	string t=b;
	b=a;
	a=t;
}
vector<char> a1(a.size());
vector<char> b1(b.size());
copy(a.begin(),a.end(),a1.begin());
copy(b.begin(),b.end(),b1.begin());
for(int i=a.size()-1,j=b.size()-1;i>=0;i--,j--)
{
	a1.at(i)=a1.at(i)+(j>=0?b1.at(j)-'0':0);
	if(a1.at(i)>'9') 
{
	a1.at(i)=a1.at(i)-10;
	if(i!=0) a1.at(i-1)++;
	else a1.insert(a1.begin(),'1');
}
}
for(vector<char>::iterator it=a1.begin();it!=a1.end();it++)
	cout<<*it;
cout<<" "<<endl;
}
