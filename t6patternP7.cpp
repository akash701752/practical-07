// Task 6 To print Pattern using Array
/*
   * * * *
   * * *
   * *
   *
*/
#include<iostream>

using namespace std ;
int main()
{
  int  i , j , m , n ;
  cout<<"Enter Order Of Square Matrix as mXn : " ; // m=n for Square Matrix
  cin>>m>>n ;
  char arr[m][n] ;
  cout<<"Output Pattern "<<endl;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if((i+j)<=m-1)
      {
        arr[i][j] = '*' ;
      }
      else
      {
       arr[i][j] = ' ' ;
      }
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<arr[i][j] ;
    }
    cout<<endl ;
  }
  return 0 ;
}
