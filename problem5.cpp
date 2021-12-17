#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{

    string str;

    int len,temp,temp2,cnt=0;

    getline(cin,str);
    len=str.length();

    if(str[0]=='+' || str[0]=='-' || str[0]=='*' || str[0]=='/' || str[0]=='^' || str[len-1]=='+' || str[len-1]=='-' || str[len-1]=='*' || str[len-1]=='/' || str[len-1]=='(')
    {
        cout << "Invalid" << endl;
        return 0;
    }
    for(int i=0;i<len;i++)
    {

        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {

            cout << "Invalid" << endl;
            return 0;


        }
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {

            if(str[i+1]=='+' || str[i+1]=='-' || str[i+1]=='*' || str[i+1]=='/')
            {

                cout << "Invalid" << endl;
                return 0;

            }


        }
        if(str[i]==')')
        {
            temp=i;


        }
        else if(str[i]=='(' && i+2<len)
        {

            if(str[i+1]==')')
            {

                cout << "Invalid" << endl;
                return 0;

            }
            else if(str[i+1]=='*' || str[i+1]=='/')
            {

                if(str[i+2]=='+' || str[i+2]=='-' || str[i+2]=='*' || str[i+2]=='/')
                {

                    cout << "Invalid" << endl;
                    return 0;

                }
                else
                {

                    cout << "Invalid" << endl;
                    return 0;

                }


            }
            else
            {

                for(int j=i;j<len;j++)
                {

                    if(str[i]==')')
                    {
                        cnt++;
                    }


                }
                if(cnt==0)
                {
                    cout << "Invalid" << endl;
                    return 0;
                }


            }


        }

    }
    if(temp<temp2)
    {
        cout<<"Invalid"<<endl;
        return 0;
    }
    cout<<"valid"<<endl;
    return 0;



}
