#include <iostream>
using namespace std;

class Bank {

string Name;

string AccountNumber;

double Balance;

public:

Bank (string name, string accountnumber, double balance)
{
  Name = name;
  AccountNumber = accountnumber;
  Balance = balance;
}

void Print()
{
  cout<<"Name: \t"<<Name<<endl<<"Account Number: \t"<<AccountNumber<<endl<<"Balance: \t"<<Balance<<endl;
}

bool Deposite (double amount)
{
  Balance = Balance + amount;
  return 1;
}

bool Withdraw (double amount)
{
  if( (Balance - amount > 0) )
  {
    Balance = Balance - amount;
    return 1;
  }
  else
    return 0;
}

};
int main()
{
  cout<<"Enter your details"<<endl;
  cout<<"Name: \t";
  string name;
  getling(cin,name);
  cout<<"Balance: \t";
  double balance;
  cin>>balance;
  cout<<"Account number: \t";
  string accountnumber;
  getline(cin,accountnumber);
  Bank b(name,accountnumber,balance);
  b.print();
  b.Deposite(500);
  b.print();
  b.Withdraw(500);
  b.print();
}
