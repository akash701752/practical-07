#include<iostream>
using namespace std ;
int main()
{
  int ch ;
  cout<<"1. For Crrent Year "<<endl ;
  cout<<"2. For Crrent Month "<<endl ;
  cout<<"3. For Crrent Date "<<endl ;
  cout<<"Enter Your Choice : ";
  cin>>ch ;
  switch(ch)
  {
    case 1 : cout<<"Current Year is : 2021" <<endl;
      break ;
    case 2 : cout<<"Current Month is : October" <<endl;
      break ;
    case 3 : cout<<"Current Date is : 13" <<endl;
      break ;
    default : cout<<"!!! Invalid Choice !!!"<<endl ;
      break ;
  }
  return 0 ;
}
