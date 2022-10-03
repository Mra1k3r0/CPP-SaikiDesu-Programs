#include <iostream>
using namespace std;

int main()
{
	float b;
	cout<<"please input your balance: ";
	cin>>b;
	cout<<"checking balance..."<<endl;
	if(b <= 999)
	{
		cout<<"Sorry, Your current balance is low";
	}
	else
	{
		cout<<"Congrats! Your current balance is sufficient";
	}
	return 0;
}