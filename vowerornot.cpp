#include <iostream>
using namespace std;

int main()
{
	char letter;
	cout<<"Input a letter: ";
	cin>>letter;
	
	switch(letter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
	    case 'u':
	    case 'A':
		case 'E':
		case 'I':
		case 'O':
	    case 'U':
	    {
	    	cout<<"Vowel";
	    	break;
	    }
	    default:
	    {
	    	cout<<"Not vowel";
	    }
	}
	return 0;
}