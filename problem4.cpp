#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main()
{
    int len;

    string str,result;
    cin >> str;

    result='E';

    cout << result << endl;

    len=str.length();

    for(int i=1;i<len;i=i+2)
    {

        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {

            result = result + str[i];
            result = result + 'E';

            cout << result << endl;


        }


    }
    for(int i=0;i<len;i=i+2)
    {

        result[i]=str[i];
        cout << result << endl;


    }


}
