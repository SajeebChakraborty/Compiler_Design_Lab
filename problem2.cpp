#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{

    cout<<"Enter -777 to terminate"<<endl;
    while(1)
    {
    int number_cnt=0,point_cnt=0,binary_cnt=0,len;
    string str;


    getline(cin,str);
    //cout << str;

    len=str.length();

    for(int i=0;i<=len;i++)
    {

        if(str[i]=='0' || str[i]=='1')
        {
            binary_cnt++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            number_cnt++;
        }
        if(str[i]=='.')
        {
            point_cnt++;
        }
    }
       // cout << number_cnt << point_cnt << binary_cnt << endl;
    //deciaml check
    if((number_cnt+point_cnt)==len && point_cnt==0)
    {

        if(binary_cnt==len)
        {

            cout << "binary number" << endl;

        }
        else if(str[0]>='1' && len<=4)
        {
            cout << "shortest integer number" << endl;
        }
        else if(str[0]>='1' && len>=5)
        {
            cout << "longest number" << endl;
        }
        else
        {
          cout << "Undefined" << endl;
        }

    }
    else if((number_cnt+point_cnt)==len && point_cnt==1)
    {
        //cout << "rfergf" << endl;
        if(binary_cnt==len-1)
        {
              cout << "binary number" << endl;
        }
         else if(len<=5)
        {
            cout << "float number" << endl;
        }
        else if(len>5)
        {
            cout << "double number" << endl;
        }


    }
    else if ((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z'))
    {
        if((str[0]>='i' && str[0]<='n') || (str[0]>='I' && str[0]<='N'))
        {
            cout << "Interger variable" << endl;

        }
        if((str[0]>='a' && str[0]<='h') || (str[0]>='a' && str[0]<='h'))
        {
            cout << "float variable" << endl;

        }
        if(str[0]>='c' && str[1]=='i' && str[2]=='_')
        {
            cout << "character variable" << endl;

        }
         if(str[0]>='b' && str[1]=='n' && str[2]=='_')
        {
            cout << "binary variable" << endl;

        }


    }
    else if(str[0]=='-'&&str[1]=='7'&&str[2]=='7'&&str[3]=='7')
    {
           return 0;
    }
    else
    {
        cout << "Undefined" << endl;
    }



    }
}
