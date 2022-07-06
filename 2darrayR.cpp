#include<iostream>
using namespace std;
int main()
{
  int i,j;
  int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
  cout<<"2D array representation:"<<"\n";
  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      cout<<arr[i][j]<<"\t";
    }
    cout<<"\n";
  }
  return 0;
}
