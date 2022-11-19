#include <iostream>
#include <string>
using namespace std;

int main()
{
	char letter;
	cin >> letter;
	int numletter = letter;
	if (numletter == 122)
	{
		cout << "a" << endl;
		return 0;
	}
	numletter  = ++letter;
	cout << letter;
	return 0;
}
