// Task 4 To print Pattern using Array
/*
   *
   * *
   * * *
   * * * *
*/
#include<iostream>
#define MAX 4 
using namespace std ;
int main()
{
  char arr[MAX][MAX] ;
  int  i , j ;

  cout<<"Output Pattern "<<endl;
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      if(j<=i)
      {
        arr[i][j] = '*' ;
      }
      else
      {
       arr[i][j] = ' ' ; // Entering Space to Array
      }
    }
  }
  for(i=0;i<MAX;i++)
  {
    for(j=0;j<MAX;j++)
    {
      cout<<arr[i][j] ;
    }
    cout<<endl ;
  }
  return 0 ;
}
