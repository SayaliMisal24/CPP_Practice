#include<iostream>
using namespace std;
class Payment
{
public:
   virtual void pay(){
      cout<<"Payment made by cash"<<endl;
   }
};
class CreditCardPayment:public Payment
{
public:
   void pay(){
      cout<<"Payment made by credit card"<<endl;
   }
};
class UpiPayment:public Payment
{
public:
   void pay() {
      cout<<"Payment made through UPI"<<endl;
   }
};
int main()
{
Payment*paymentPtr;
CreditCardPayment credit;
UpiPayment Upi;
paymentPtr=&credit;
paymentPtr->pay();
paymentPtr=&Upi;
paymentPtr->pay();
return 0;
}
