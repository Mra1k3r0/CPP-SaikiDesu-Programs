//Write a program that ask the user for two integers, and then prompts the user to enter an option from 1 to 4. If 1, add the two integers. If 2, subtract the second integer from the first. If 3, multiply the integers. If 4, divide the first by the second integer. Display an error message if the number entered is not 1 to 4.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, choice, math;
	cout<<"Input a number: ";
	cin>>num1;
	cout<<"Input a number: ";
	cin>>num2;
	cout<<"1. add"<<endl<<"2. substract"<<endl<<"3. multiply"<<endl<<"4. divide"<<endl;
	cout<<"choose which of the following you want to do: ";
	cin>>choice;
	
	if(choice == 1)
	{
		math = num1 + num2;
		cout<<math;		
	}
	else if(choice == 2)
	{
		math = num2 - num1;
		cout<<math;
	}
	else if(choice == 3)
	{
		math = num1 * num2;
		cout<<math;
	}
	else if(choice == 4)
	{
		math = num1 / num2;
		cout<<math;
	}
    else
  {
	cout<<"Invalid Input";
  }
	return 0;
}