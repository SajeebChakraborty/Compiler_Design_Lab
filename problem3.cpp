#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{

    string keyword[32]={"auto","double","int","struct","break","else","long",
       "switch","case","enum","register","typedef","char",
       "extern","return","union","const","float","short",
       "unsigned","continue","for","signed","void","default",
       "goto","sizeof","voltile","do","if","static","while"};

    string arithmatic[7]={"+","-","*","/","++","--","%"};

    string select,str;

    int len,len2,num_cnt=0,char_cnt=0;


    getline(cin,str);

    len= str.length();

    for(int i=0;i<32;i++)
    {

        select=keyword[i];
        len2=select.length();
        int cnt=0;

        if(len==len2)
        {

            for(int j=0;j<len;j++)
            {

                if(select[j]==str[j] && ((str[j]>='a' && str[j]<='z') || (str[j]>='A' && str[j]<='Z')))
                {
                    cnt++;
                }


            }
            if(cnt==len)
            {
                cout << "Keyword" << endl;
                return 0;
            }

        }

    }

    for(int i=0;i<7;i++)
    {

        if(arithmatic[i]==str)
        {

            cout << "Arithemetic Operation" << endl;
            return 0;

        }


    }

    if(str[0]=='c' && str[1]=='o' && str[2]=='n' && str[3]=='s' && str[4]=='t' && len>=4)
    {

        cout << "constant" << endl;

    }

    for(int i=0;i<len;i++)
    {

        if(str[i]>='0' && str[i]<='9')
        {

            num_cnt++;

        }
        else
        {

            char_cnt++;


        }

    }
    if(num_cnt==len)
    {
        cout << "Integer" << endl;
    }
    else if(num_cnt==len-1 && str[0]>='0' && str[0]<='9')
    {
        cout << "Float" << endl;
    }
    else if(((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z')) && num_cnt<len)
    {
        cout << "Identifier" << endl;
    }
    else
    {
         cout << "Invalid Input" << endl;
    }
}
