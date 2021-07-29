
#include <iostream>
#include <string>
using namespace std;
string encrypte(string mess, string pass)
{
	for (int i = 0; i < mess.length(); i++)
	{
		mess[i] += pass.length();
	}

	return mess;
}
string uncrypte(string mess, string pass)
{
	for (int i = 0; i < mess.length(); i++)
	{
		mess[i] -= pass.length();
	}

	return mess;
}
int main()
{
	while (true) {
		int a;
		cout << "This is a c++ encrypte-uncrypte program " << endl;
		cout << "What do you want to do 1.encrypte, 2.uncrypte " << endl;
		cin >> a;
		if (a == 1)
		{
			string m, p, enc;
			cout << "Write your messege(PLEASE USE - OR _ BETOWEEN EACH WORDS) " << endl;
			cin >> m;
			cout << "Write your pasward " << endl;
			cin >> p;
			enc = encrypte(m, p);
			cout << "The encrypted message is: " << enc << endl;
			cout << "Remember you have to keep your pasward in order to uncrypte your messege " << endl;
			cout << "=============================================================================== " << endl;
		}
		else if (a == 2)
		{
			string m, p, unc;
			cout << "Write the messege " << endl;
			cin >> m;
			cout << "Write the pasward " << endl;
			cin >> p;
			unc = uncrypte(m, p);
			cout << "The uncrypted message is: " << unc << endl;
			cout << "=============================================================================== " << endl;
		}
		else {
			cout << "Wrong input " << endl;
			cout << "=============================================================================== " << endl;
			break;
		}

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
