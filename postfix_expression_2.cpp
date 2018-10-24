#include<iostream>
#include<stack>
using namespace std;
int main()
{
    char exp[]="100 200 + 2 / 5 * 7 +";
    stack<int>s;
    int i,num=0;
    for(i=0;exp[i]!='\0';)
    {
        if(exp[i]==' ')
        {
            i++;
        }
        else if(exp[i]>='0'&&exp[i]<='9')
        {
            num=0;
            while(exp[i]>='0'&&exp[i]<='9')
            {
                num=num*10+(exp[i]-'0');
                i++;
            }
            s.push(num);
        }
        else
        {
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            switch(exp[i])
            {
            case '+':
                {
                    int k=x+y;
                    s.push(k);
                    break;
                }
            case '-':
                {
                    int k=y-x;
                    s.push(k);
                    break;
                }
            case '*':
                {
                    int k=x*y;
                    s.push(k);
                    break;
                }
            case '/':
                {
                    int k=y/x;
                    s.push(k);
                    break;
                }
            }
            i++;
        }
    }
    cout<<s.top();
}
