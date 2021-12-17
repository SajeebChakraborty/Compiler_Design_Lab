#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int len;

int presedence(char ch)
{

    if(ch=='^') return 4;
    else if(ch=='/' || ch=='*') return 3;
    else if(ch=='+' || ch=='-') return 2;
    else return 1;



}
void Postfix(string str)
{

    stack <char>stck;
    string result;

    len=str.length();

    for(int i=0;i<len;i++)
    {

        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ||  (str[i] >= '0' && str[i] <= '9'))
        {

                result=result + str[i];


        }
        else if(str[i]=='(')
        {

            stck.push(str[i]);

        }
        else if(str[i]==')')
        {

            while(stck.top()!='(')
            {

                result=result + stck.top();
                stck.pop();


            }

            stck.pop();

        }
        else if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {

            while(!stck.empty() && (presedence(str[i]) <= presedence(stck.top())))
            {
                result=result + stck.top();
                stck.pop();

            }
            stck.push(str[i]);


        }

    }
    while(!stck.empty())
    {

        result=result + stck.top();
        stck.pop();


    }
    cout<<"The expected  postfix expression is:"<<endl;
    cout << result << endl;


}

int main()
{
    cout<<"Enter a infix expression"<<endl;
    string expression;
    cin>>expression;
    Postfix(expression);
    return 0;

}
