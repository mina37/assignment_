
## Name: Mina Sherif Henry
## BN: 33846
-
**1. What does a derived class inherit from a base class?**
it iherites all its properties and methods, except for the overridden methods and except all the private members

**2. What doesn’t a derived class inherit from a base class?**
all the overridden methods as well as the constructors

**3. Suppose the return type for the baseDMA::operator=() function were defined as
void instead of baseDMA &.What effect, if any, would that have? What if the return
type were baseDMA instead of baseDMA &?**
method with *void* return type, won't work for chain submition, while function with *baseDMA baseDMA::operator&=()* will work with chaing submition same would *baseDMA baseDMA::operator =()* except this will copy the object instead of referencing it

**4. In what order are class constructors and class destructors called when a derivedclass
object is created and deleted?**
the base class constructor is called before the derived class constructor when the object is created, but the derived class destructor is called before the base class destructor when the object is deleted

**5. If a derived class doesn’t add any data members to the base class, does the derived
class require constructors?**
ye

**6. Suppose a base class and a derived class both define a method with the same name
and a derived-class object invokes the method.What method is called?**
the method of the derived class

**7. When should a derived class define an assignment operator?**
when it uses different data members than the base class, and if it initializes memory location for dynamic array

**8. Can you assign the address of an object of a derived class to a pointer to the base
class? Can you assign the address of an object of a base class to a pointer to the
derived class?**
we can assign the address of an object of the derived class to a pointer of the base class, but we can't assign the address of an object of the base class to a point of the derived class

**9. Can you assign an object of a derived class to an object of the base class? Can you
assign an object of a base class to an object of the derived class?**
an object of the derived class can be assigned to an object of the base class, but an object of the base class can't be assigned to an object of the derived class, except if the assignment is defined through an assignment operator in the derived class, or constructor with the base class as argument

**10. Suppose you define a function that takes a reference to a base-class object as an
argument.Why can this function also use a derived-class object as an argument?**
because a pointer of the base class can point to the address of an object of the derived class

**11. Suppose you define a function that takes a base-class object as an argument (that is,
the function passes a base-class object by value).Why can this function also use a
derived-class object as an argument?**
because the copy action that the function does, invokes the base class constructor which in turn creates a reference to the base class which can point to an address of a derived class

**12. Why is it usually better to pass objects by reference than by value?**
because it doesn't do the processing of copying the object, rather it just saves reference to that object, its only not prefered when the function will need to modify an object that must not be modified

**13. Suppose Corporation is a base class and PublicCorporation is a derived class.Also
suppose that each class defines a head() member function, that ph is a pointer to the Corporation type, and that ph is assigned the address of a PublicCorporation
object. How is *ph->head()* interpreted if the base class defines head() as a
a. Regular nonvirtual method
b. Virtual method
780 Chapter 13 Class Inheritance**
when the function is nonvirtual, it will invoke the function in the base class, but if the function is virtual it will invoke the function in the derived class

**14. What’s wrong, if anything, with the following code?***
```
class Kitchen
{
private:
  double kit_sq_ft;
public:
  Kitchen() {kit_sq_ft = 0.0; }
  virtual double area() const { return kit_sq_ft * kit_sq_ft; }
};
class House : public Kitchen
{
private:
  double all_sq_ft;
public:
  House() {all_sq_ft += kit_sq_ft;}
  double area(const char *s) const { cout << s; return all_sq_ft; }
};
```
it logical that the kitchen should be derived from the house, but what's wrong is, that the `double kit_sq_ft` should be defined as public or protected not private
