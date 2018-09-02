#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int arr[7]={100,80,60,70,60,75,85};
    stack <int> s;
    s.push(0);
    int span[7];
    span[0]=1;
    int i;
    for(i=1;i<7;)
    {
        if(s.empty())
        {
            span[i]=i+1;
            s.push(i);
            i++;
        }
        if(arr[i]<arr[s.top()])
        {
            span[i]=i-s.top();
            s.push(i);
            i++;
        }
        else
            s.pop();

    }
    for(i=0;i<7;i++)
    {
    cout<<span[i]<<" ";
    }
    int maxm=span[0];
    for(i=0;i<7;i++)
    {
        if(span[i]>maxm)
        maxm=span[i];
    }
    cout<<endl<<maxm;
}
