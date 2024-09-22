#include<iostream>
using namespace std;
class A
{
public:
  float INR;
  int opt;
    A ()
  {
	cout << "Enter the amount in INR" << endl<<"₹";
	cin >> INR;

  }
};
class B:public A
{
public:
  B ()
  {
	cout << "Your currency in YEN is--> ";
	cout <<"¥"<< INR * 1.85 << endl;
  }
};
class C:public A
{
public:
  C ()
  {
	float a;
	  cout << "Your currency in USD is--> ";
	  a = INR * 0.012;
	  cout << "$"<<a << endl;
  }

};
class D:public A
{
  float a;
public:
    D ()
  {
	cout << "Your currency in EURO is--> ";
	a = INR * 0.011;
	cout <<"€"<< a << endl;
  }
};
class E:public A
{
public:
  float a;
    E ()
  {
	cout << "Your currency in AED is--> ";
	a = INR * 0.044;
	cout << "AED "<<a << endl;
  }
};
int
main () 
{main :
string ans="y";
  A *a;
  int opt;
  cout << "CURRENCY CONVERTER"
	<< endl;
  cout << ""
	<< endl;
  cout << "INR CONVERTER*"
	<< endl;
  cout << "Available Currency:" << endl;
  cout << "1 YEN" << endl << "2 USD" << endl << "3 EURO" << endl << "4 AED" <<
	endl;
  cout << "Enter your option :" << endl;
  cin >> opt;
  while ((ans=="y")or(ans=="Y")){
  if (opt == 1)
	{
	  B b;
	}
  else if (opt == 2)
	{
	  C c;
	}
  else if (opt == 3)
	{
	  D d;}
  else if (opt == 4)
	{
	  E e;}
  else
	{
	  cout << "currency not supported" << endl;
	}
  cout<<"\n"<<"Do you wish to convert again?"<<endl<<"ENTER y or n : ";
  cin>>ans;
  if((ans=="y")or (ans=="Y"))
  { goto main;
  }
  else{cout<<"\n"<<"Thankyou !";}
  }
  return 0;
}