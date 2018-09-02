#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    char str[1000]="{()[()]}{}([]){}";
    stack <char> s;
    s.push(str[0]);
    int i=1,j;
    while(str[i]!='\0')
    {
        if(str[i]=='{'||str[i]=='('||str[i]=='[')
        {
            s.push(str[i]);
            i++;
        }
        else
        {
            if(str[i]=='}')
            {
                if(s.empty())
                    break;
                if(s.top()=='{')
                {
                    s.pop();
                }

            }
           else if(str[i]==']')
            {
                if(s.empty())
                    break;
                if(s.top()=='[')
                {
                    s.pop();
                }
                else
                    break;
            }
            else if(str[i]==')')
            {
                if(s.empty())
                    break;
                if(s.top()=='(')
                {
                    s.pop();
                }
                else
                    break;
            }
            i++;
        }
    }
    if(s.empty()&&str[i]=='\0')
        cout<<"valid parenthesis";
    else
        cout<<"invalid parenthesis";
}
