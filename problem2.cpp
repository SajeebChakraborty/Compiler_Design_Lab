#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
int main()
{


    cout<<"Enter -777 to terminate"<<endl;
    while(1)
    {
        int len,i,bcnt=0,ncnt=0,fcnt=0,scnt=0,cnt=0;
    char ch;
    string s;
    //cin>>s;
    //cout<<s<<endl;
    getline(cin,s);
    len=s.length();
    for(i=0;i<len;i++)
    {
       if(s[i]>='0' && s[i]<='1')
       {
          bcnt++;
       }
        if(s[i]>='0' && s[i]<='9')
        {
            ncnt++;
        }
        if(s[i]=='.')
        {
            fcnt++;
        }
    }
        if((ncnt+fcnt)==len&&fcnt==0)
        {

            if(bcnt==len&&s[0]=='0')

            {
                cout<<"binary number"<<endl;
            }
            else if(ncnt==len&&s[0]>='1')
            {
                if(len<=4 )
                {
                    cout<<"ShortInt number"<<endl;
                }
                else if(len>4)
                {
                    cout<<"LongInt number"<<endl;
                }
                else{
                cout<<"Undefined"<<endl;
            }

            }

        }
        else if(fcnt==1&&(fcnt+ncnt)==len&&s[0]>='1')
        {
           if(len<=5 )
                {
                    cout<<"Float number"<<endl;
                }


                else
                {
                    cout<<"Double number"<<endl;
                }
        }
        else if((s[0]>='a'||s[0]>='A'))
        {
            if((s[0]>='i'&&s[0]<='n')||(s[0]>='I'&&s[0]<='N'))
            {
                cnt=0;
                 //cout<<"Character variable"<<endl;
                    for(i=2;i<len;i++)
                    {
                        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
                           {
                               cnt++;
                           }
                    }
                    if(cnt+2==len)
                    {
                        cout<<"Integer variable"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid "<<endl;
                    }

            }
            else if(s[0]=='c'&&s[1]=='h'&&s[2]=='_'&&(s[3]>='a'&&s[3]<='z'||(s[3]>='A'&&s[3]<='Z')||(s[3]>='0'&&s[3]<='9')))
            {
                    cnt=0;
                    for(i=4;i<len;i++)
                    {
                        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
                           {
                               cnt++;
                           }
                    }
                    if(cnt+4==len)
                    {
                        cout<<"Character variable"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid "<<endl;
                    }
            }
            else if(s[0]=='b'&&s[1]=='n'&&s[2]=='_'&&((s[3]>='a'&&s[3]<='z')||(s[3]>='A'&&s[3]<='Z')||(s[3]>='0'&&s[3]<='9')))
            {
                    cnt=0;
                    for(i=4;i<len;i++)
                    {
                        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
                           {
                               cnt++;
                           }
                    }
                    if(cnt+4==len)
                    {
                        cout<<"Binary variable"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid "<<endl;
                    }
            }
            else if((s[0]>='a'&&s[0]<='h')||(s[0]>='A'&&s[0]<='H')&&(s[1]>='o'&&s[1]<='z')||(s[1]>='O'&&s[1]<='Z'))
            {
                   for(i=2;i<len;i++)
                    {
                        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
                           {
                               cnt++;
                           }
                    }
                    if(cnt+2==len)
                    {
                        cout<<"Float variable"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid "<<endl;
                    }
            }

            else
        {
             cout<<"Undefined"<<endl;
        }
        }
       else if(s[0]=='-'&&s[1]=='7'&&s[2]=='7'&&s[3]=='7')
       {
           return 0;
       }
       else
             cout<<"Undefined"<<endl;

    }

}
