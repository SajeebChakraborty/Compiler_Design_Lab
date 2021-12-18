#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,j;
    string s,str;
    cin>>s;
    str='E';
    len=s.length();
    cout<<"E"<<endl;
    for(i=1;i<len;i=i+2)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
        {
           str=str+s[i];
           str=str+'E';
           cout<<str<<endl;
        }
    }
    for(i=0;i<len;i=i+2)
    {
       str[i]=s[i];
       cout<<str<<endl;
    }
}
