#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person()
	{
		lname = "";
		fname[0] = '\0';
	} // #1
	Person(const string & ln, const char * fn = "Heyyou")
	{
		lname = ln;
		for (int i = 0; i < 25;i++)
		{
			fname[i] = fn[i];
		}
	}// #2
	 // the following methods display lname and fname
	void Show()
	{
		cout << fname << " " << lname;
	} // firstname lastname format
	void FormalShow()
	{
		cout << fname << " " << lname;
	}// lastname, firstname format
	/*Person(char fn[])
	{
		for (int i = 0; i < 25; i++)
		{
			fname[i] = fn[i];
		}
		lname ="";
	}*/
};

int main()
{
	cout << "Enter your first name" << endl;
	char fn[25];
	cin >> fn;
	cout << "Enter your last name" << endl;
	string ln;
	getline(cin, ln);
	Person p1, p2(ln), p3(ln,fn);
	p2.Show();
	p3.FormalShow();

}
