#include <iostream>
using namespace std;

int main()
{
	int hour, level, exp, add;
	int hh;
	double total, over, hourly, net;
	float a = 1.5, b = 0.03;
	cout << "1. 200\n2. 250\n3. 300\n";
	cout << "Please input the skill level: ";
	cin >> level;
	cout << "Please enter the hours: ";
	cin >> hour;

	if (level == 1)
	{
		hh = 200;
		if (hour <= 40)
		{
			hourly = hour * hh;
			over = 0.0;
			total = hourly + over;
			net = 0.0;
		}
		else
		{
			hourly = (40 * hh);
			over = (hour - 40) * hh * a;
			total = hourly + over * b;
			net = 0.0;
		}
	}

	else if (level == 2)
	{
		cout << "ADDITIONAL INSURANACE" << endl;
		cout << "1. Medical Insurance" << endl;
		cout << "2. Dental Insurance" << endl;
		cout << "3. Long-term Disability" << endl;
		cout << "input the number of additional insurance: ";
		cin >> exp;
		if (exp == 1)
		{
			add = 50;
		}
		else if (exp == 2)
		{
			add = 40;
		}
		else if (exp == 3)
		{
			add = 35;
		}
		hh = 250;
		if (hour <= 40)
		{
			hourly = hour * hh;
			over = 0.0;
			total = hourly + over;
			net = total - add;
		}
		else
		{
			hourly = (hour * hh);
			over = (hour - 40) * hh * a;
			total = hourly + over * b;
			net = total - add;
		}
	}

	else if (level == 3)
	{
		cout << "ADDITIONAL INSURANACE" << endl;
		cout << "1. Medical Insurance" << endl;
		cout << "2. Dental Insurance" << endl;
		cout << "3. Long-term Disability" << endl;
		cout << "input the number of additional insurance: ";
		cin >> exp;
		if (exp == 1)
		{
			add = 50;
		}
		else if (exp == 2)
		{
			add = 40;
		}
		else if (exp == 3)
		{
			add = 35;
		}
		hh = 300;
		if (hour <= 40)
		{
			hourly = hour * hh;
			over = 0.0;
			total = hourly + over;
			net = total - add;
		}
		else
		{
			hourly = (hour * hh);
			over = (hour - 40) * hh * a;
			total = hourly + over * b;
			net = total - add;
		}
	}
	cout << "\nRESULT:\n";
	cout << "Hours worked: " << hour << "hr(s)" << endl;
	cout << "The hourly pay rate: $" << hh << endl;
	cout << "The regular pay for 40 hours is: $" << hourly << endl;
	cout << "The overtime pay: $" << over << endl;
	cout << "The total pay: $" << total << endl;
	cout << "The total deduction: $" << add << endl;
	cout << "The net pay after deduction: $" << net;

	return 0;
}