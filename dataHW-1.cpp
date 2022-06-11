// Joseph Lemelle data sturctures hw 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string acualtext;
	int i = 5;
	int counter = 1;

	vector<string> text;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter text string #" << counter << ".\n";
		counter++;
		cin >> acualtext;
		text.push_back(acualtext);

	}	

	cout << "\nThe reverse order of your strings are:\n";
	reverse(text.begin(), text.end());
	for (auto const acualtext : text)
		cout << acualtext << endl;

	return 0;
}