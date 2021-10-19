// Task : To Print Spiral Matrix 
#include<iostream>
using namespace std ;
int main()
{
    int n,i,j,k ;
    cout<<"Enter Order Of Square Matrix :" ;
    cin>>n ;
    int arr[n][n] ;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
      {
        cin>>arr[i][j] ;
      } 
    }
    cout<<"Entered Matrix is "<<endl ;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        cout<<arr[i][j]<<" " ;
      } 
      cout<<endl ;
    }
    cout<<"Entered Matrix in Spriral Form is "<<endl ;
    for(i=n-1,j=0;i>j;i--,j++)
    {
      for(k=j;k<i ;k++)
        cout<<arr[j][k] <<" " ;
      for(k=j;k<i ;k++)
        cout<<arr[k][i] <<" " ;
      for(k=i;k>j ;k--)
        cout<<arr[i][k] <<" " ;
      for(k=i;k>j ;k--)
       cout<<arr[k][j]  <<" " ;
    }
    if(n%2==1)
    {
        cout<<arr[n/2][n/2] ;
    }
    return 0;
}
