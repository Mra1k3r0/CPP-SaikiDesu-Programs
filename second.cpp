#include <iostream>
using namespace std;

int main()
{
	int ma, pi;
	int choice;
	cout<<"1.Mahogany"<<endl;
	cout<<"2.Pine"<<endl;
	cout<<"Choose which of the following you want to buy:";
	cin>>choice;
	if(choice == 1)
	{
		ma = 1000 * 10/100;
		cout<<"The price is: $"<<ma; 
	}
   else
   {
		pi = 1500 * 5/100;
		cout<<"The price is: $"<<pi;
	}
	return 0;
}