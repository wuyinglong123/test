#include<iostream>
#include<string>
#include<algorithm>
#include"BigNum.h"
using namespace std;

void Num::multi(string a,string b)
{
    int i,j,k,m;
	string c1,c2;
	string c3=a+b;
	if(a.at(0)==48||b.at(0)==48) 
	cout<<c3;
	if(a.size()>b.size())
	{
    	    	c1=a;
		c2=b;
	}
	else
	{
		c1=b;
		c2=a;
	}
	reverse(c1.begin(),c1.end());
	reverse(c2.begin(),c2.end());
	for(i=0;i<c2.size();i++)
	{
		if(c2.at(i)>=48&&c2.at(i)<=57) c2.at(i)-=48;
	}
	for(i=0;i<c1.size();i++)
	{
		if(c1.at(i)>=48&&c1.at(i)<=57) c1.at(i)-=48;
	}
	for(i=0;i<c3.size();i++)
            c3.at(i)=0;
  	for(i=0;i<c2.size();i++)
	{
		for(j=0;j<c1.size();j++)
		{
			m=c2.at(i)*c1.at(j);
			c3.at(i+j+1)+=m/10;
			c3.at(i+j)+=m%10;
			for(k=i+j;k<c3.size()-1;k++)
			{
				if(c3.at(k)>=10) 
				{
					c3.at(k+1)+=c3.at(k)/10;
					c3.at(k)=c3.at(k)%10;
				}
				else
					break;
			}
		}
	}
	for(i=c3.size()-1;i>=0;i--)
	{
		if(c3.at(i)>0)
          break;
	}
	c3.erase(i+1,c3.size());
	for(i=0;i<c3.size();i++)
	{
		if(c3.at(i)>=10) c3.at(i)+=87;
		if(c3.at(i)<10) c3.at(i)+=48;
	}
	reverse(c3.begin(),c3.end());
	cout<<c3;
}



