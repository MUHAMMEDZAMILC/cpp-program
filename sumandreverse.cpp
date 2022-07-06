//sum and reverse
#include<iostream>
using namespace std;
void main()
{
  int n,rem,rev=0,sum=0,temp;
  cout<<"enter the number:";
  cin>>n;
  temp=n;
  while (n>0)
   {
     rem=n%10;
     sum=sum+rem;
     rev=rev*10+rem;
     n=n/10;
   }
   cout<<"sum of the"<<temp<< " digits :"<<sum<<"\n";
   cout<<"reverse of the"<<temp<<":"<<rev; 
}
