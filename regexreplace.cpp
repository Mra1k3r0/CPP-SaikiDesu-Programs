#include <iostream>
#include <string.h>
#include <regex>
using namespace std;

int main()
{
	string mystr = "Mary always buy donut, because Donut was her favorite food \n";

	cout << "Input string: " << mystr << endl;

	// regex to match string beginning with 'd' or 'D'

	regex regexp("d[a-zA-Z]+|D[a-zA-Z]+");
	cout << "Replace the word 'donut' with word 'hotdog' : ";

	// regex_replace() for replacing the match with the word 'hotdog'

	cout << regex_replace(mystr, regexp, "hotdog");

	// Example by SaikiDesu
}