// Task 1 Version 1  - To print Matrix in Reverse Order Using Reverse Method
#include<iostream>
#define MAX 3 
using namespace std ;
int main()
{
  int arr[MAX][MAX] , i , j ;
  cout<<"Enter Matrix "<<endl;
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      cin>>arr[i][j] ;
    }
  }
  cout<<"Input Matrix is "<<endl;
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      cout<<arr[i][j] <<" " ;
    }
    cout<<endl ;
  }
  cout<<"Output Matrix is "<<endl;
  //int m =i , n = j ;
  for(i=MAX-1;i>=0;i--)
  {
    for(j=MAX-1;j>=0;j--)
    {
      cout<<arr[i][j]<<" " ;
    }
    cout<<endl ;
  }
  return 0 ;
}
