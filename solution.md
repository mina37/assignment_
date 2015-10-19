# *Name:* Mina Sherif Henry
# *Bench Number:* 33846 

**1. What is a class?**
class is a way of organizing the program, by creating new objects, thus creating new instances of these objects, so calls is a way of creating objects to organize the prohram

**2. How does a class accomplish abstraction, encapsulation, and data hiding?**
class defines the object and hot it works through its data and methods and this provides, abstraction, and its all writen in one place, easy to read and this provides encapsulation, and being able to provide some data members and methods as private, allows hiding the data

**3. What is the relationship between an object and a class?**
class defines property and behavior of the object

**4. In what way, aside from being functions, are class function members different from class data members?**
function members hold the logic and the way of using the data members

**5. Define a class to represent a bank account. Data members should
include the
depositor’s name, the account number (use a string), and the balance.
Member functions
should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations.
(Programming
Exercise 1 provides you with an opportunity to write the
implementation.)
Programming Exercises 559**

class Bank {

string Name;

string AccountNumber;

double Balance;

public

Bank (string name, string accountnumber, double balance);

void Print();

bool Deposite (double amount);

bool Withdraw (double amount);

};

**6. When are class constructors called? When are class destructors called?**
class constructors are called on the creating of an instance of that class, destructors are called when the method containing the instance of the class is finished

**7. Provide code for a constructor for the bank account class from Chapter Review Question 5.**

Bank(string name, string accountnumber, double balance)

{
  Name = name;
  
  AccountNumber = accountnumber;
  
  Balance = balance;
  
}

**8. What is a default constructor? What is the advantage of having one?**
default constructor is a constructor that takes no arguments, its advantages is having constructor that is triggered on not initializing the instance

**9. Modify the Stock class definition (the version in stock20.h) so that
it has member
functions that return the values of the individual data members. Note:A
member
that returns the company name should not provide a weapon for altering
the array.
That is, it can’t simply return a string reference. It could return a
const reference.**

class Stock
{

std::string company;

long shares;

double share_val;

double total_val;

void set_tot() { total_val = shares * share_val; }

public:
Stock();

Stock(const std::string & co, long n, double pr);

void buy(long num, double price);

void sell(long num, double price);

void update(double price);

void show() const;

const Stock & topval(const Stock & s) const;

int numshares() const { return shares; }

double shareval() const { return share_val; }

double totalval() const { return total_val; }

const string & co_name() const { return company; }

};

**10. What are this and *this?**

this point to the object that called the method(function), so it refers to its address, while *this, points to the object that called the method not its address, the object itself
