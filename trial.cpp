#include<bits/stdc++.h>
using namespace std ;

class food{
  //private :
      string email ;
      long number ;
  public :
      string name ;
      int price ;
      string provider ;

      void display()
      { cout << "Name              :" << name << "\n" ;
        cout << "Price per product :" << price << "\n" ;
        cout << "Provided By       :" << provider << "\n" ;
        cout << "\n" ;
      }
      void bill(int n)
      { cout << "\n" ;
        cout << "Your final check out, please confirm before proceeding to pay." << "\n" ;
        cout << n << " number of " << name << " has been order." << "\n" ;
        cout << "Total : " << price*n << "\n" ;
        cout << "\n" ;
        cout << "Food is provided by " << provider << "\n" ;
        cout << "Contact of provider-" << "\n" ;
        cout << "Email ID : " << email << "\n" ;
        cout << "Mobile Number : " << number << "\n" ;
        cout << "Thank you for Using ULTIMATE TASTE." << "\n" ;
      }
      void ass(string s1,long i1)
      { email=s1 ;
        number=i1 ;
      }

};
void Hor()
{ for(int i=0;i<100;i++)
   { cout << "-" ; }
  cout << "\n" ;
}
int main()
{    char flow='Y' ;
   while(flow=='Y')
   { food f1,f2,f3 ;
     string s1="admin@taste.com" ;
     long i1=9999999999 ;

     f1.name="Sandwich" ;
     f1.price=100 ;
     f1.provider="admin" ;
     f1.ass(s1,i1) ;

     f2.name="Maggy" ;
     f2.price=50 ;
     f2.provider="admin" ;
     f1.ass(s1,i1) ;

     f3.name="Dhosa" ;
     f3.price=80 ;
     f3.provider="admin" ;
     f1.ass(s1,i1) ;

     cout << "Welcome to the ULTIMATE TASTE" << "\n" ;
     Hor() ; Hor() ;

     cout << "MENU" << "\n" ; Hor() ;
     cout << "\n" ;

     cout << "1" << "\n" ;
     f1.display() ; Hor() ;
     cout << "2" << "\n" ;
     f2.display() ; Hor() ;
     cout << "3" << "\n" ;
     f3.display() ; Hor() ;

     cout << "Select the item you want to order." << "\n" ;
     cout << "Press 1 for Sandwich" << "\n" ;
     cout << "Press 2 for Maggy" << "\n" ;
     cout << "Press 3 for Dhosa" << "\n" ;

     int select,n ;
     cin >> select ;
     cout << "Enter the Quantity of food :" ;
     cin >> n ;
     Hor() ;
     if(select==1) { f1.bill(n) ; }
     else if(select==2) { f2.bill(n) ; }
     else if(select==3) { f3.bill(n) ; }
     else { cout << "You have entered wrong choice." << "\n" ; }

     Hor() ;

     cout << "Want to order more then press 'Y'." << "\n" ;
     cout << "And if you are done for now you can press 'N'." << "\n" ;

     cin >> flow ;
     if(flow=='Y') { continue ; }
     else { cout << "Thank you for using ULTIMATE TASTE." << "\n" ;
            flow='N' ;
          }
   }
  return 0 ;
}
