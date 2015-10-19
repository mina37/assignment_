#include <iostream>
using namespace std;
class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}// sets x, y to a,b
	void showmove()
	{
		cout << "X = " << x << endl << "Y = " << y << endl;
	}// shows current x, y values
	Move add(const Move & m)
	{
		double i=0,j=0;
		i = x + m.x;
		j = y + m.y;
		return Move(i, j);
	}
	// this function adds x of m to x of invoking object to get new x,
		// adds y of m to y of invoking object to get new y, creates a new
		// move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0)
	{
		x = a;
		y = b;
	}// resets x,y to a, b
};

int main()
{
	cout << "Please enter the postion:"<<endl;
	cout << "X = ";
	double i;
	cin >> i;
	cout << "Y = ";
	double j;
	cin >> j;
	Move m(i, j);
	m.showmove();
	cout << "Enter your move:" << endl;
	cout << "X = ";
	cin >> i;
	cout << "Y = ";
	cin >> j;
	Move m2(i, j);
	m = m.add(m2);
	cout << "your current position" << endl;
	m.showmove();
	cout << "reset to zero" << endl;
	m.reset();
	m.showmove();
}
