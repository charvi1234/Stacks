/*
Sample input:
no of test cases : 1 
no of elements : 5 1 2 4 3 

Sample output:
yes
*/
#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;
int main()
{
int n,n1,flag;
cin>>n1;
  while(n1>0)
  {
  cin>>n;
  flag = 0;
  int *arr = (int*)malloc(sizeof(int)*n);
  int *arr2 = (int*)malloc(sizeof(int)*n);
  int i;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  stack <int> s1;
  int k = 0;
  for(i=0;i<n;i++)
  {
    while(!s1.empty()&&s1.top()<arr[i])
    {
        arr2[k]=s1.top();
        k++;
        s1.pop();
    }
    s1.push(arr[i]);
  }
  while(!s1.empty())
  {
      arr2[k]=s1.top();
      k++;
      s1.pop();
  }
  for(i=1;i<n;i++)
  {
      if(arr2[i]<arr2[i-1])
      {
          flag=1;
          break;
      }
  }
  if(flag==1)
    cout<<"NO\n";
  else
    cout<<"YES\n";
  n1--;
  }
}
