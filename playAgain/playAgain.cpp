//playAgain game using do while

#include <iostream>
using std::cout;
using std::cin;

int main()
{
	char again;
	do
	{
		cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;
	} while (again == 'y');

	cout << "\nOkay, bye";

    return 0;
}

