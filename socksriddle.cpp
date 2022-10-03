#include <iostream>
using namespace std;

int main()
{
	int s, i;

	cout << "A man has 53 socks in his drawer: 21 identical blue, 15 identical black and 17 identical red. The lights are out and he is completely in the dark." << endl << endl;
	cout << "How many socks must he take out to make 100 percent certain he has at least one pair of black socks?" << endl << "Answer: ";
	cin >> i;
	s = 21 + 17 + 2;

	if (s == i)
	{
		cout << i << " is the correct answer!";
	}
	else
	{
		cout << i << " is wrong!";
	}
	return 0;
}