//fibonacci series
#include<iostream>
using namespace std;
int main()
{
  int n,i,first=0,second=1,third;
  cout<<"enter the limit:";
  cin>>n;
  cout<<"fibonacci sries are:"<<"\n";
  for(i=1;i<=n;i++)
  {
    cout<<first<<"\t";
    third=first+second;
    first=second;
    second=third;
  }
  return 0;
}
