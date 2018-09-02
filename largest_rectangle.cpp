#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int i,k=0,j;
    int arr[6]={2,1,5,6,2,3};
    stack <int>s;
    int span[6];
    s.push(0);
    for(i=1;i<6;)
    {
        if(arr[i]<arr[s.top()])
        {
          j=s.top();
          s.pop();
          if(s.empty())
          {
              span[k]=arr[j]*i;
              s.push(i);
              i++;
              k++;
          }
          else
          {
              span[k]=arr[j]*(i-s.top()-1);
              k++;
          }
        }
          else
          {
            s.push(i);
            i++;
          }
    }
    while(k<6)
    {
        j=s.top();
        s.pop();
        if(s.empty())
            span[k]=arr[j]*i;
        else
        span[k]=arr[j]*(i-s.top()-1);
        k++;
    }
    for(i=0;i<k;i++)
        cout<<span[i]<<" ";
    int maxm=span[0];
    for(i=0;i<6;i++)
    {
        if(span[i]>maxm)
            maxm=span[i];
    }
    cout<<endl<<maxm;
}
