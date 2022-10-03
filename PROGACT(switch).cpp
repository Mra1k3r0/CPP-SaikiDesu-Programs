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

	switch (level)
	{
	case 1:
	{
		hh = 200;
		switch (hour)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		{
			hourly = hour * hh; //fixed hete
			over = 0.0;
			total = hourly + over;
			net = 0.0;
			break;
		}
		default:
		{
			hourly = (40 * hh);
			over = (hour - 40) * hh * a;
			total = hourly + over * b; //fixed here
			net = 0.0;
		}
		}

		break;
	}
	case 2:
	{
		cout << "ADDITIONAL INSURANACE" << endl;
		cout << "1. Medical Insurance" << endl;
		cout << "2. Dental Insurance" << endl;
		cout << "3. Long-term Disability" << endl;
		cout << "input the number of additional insurance: ";
		cin >> exp;
		switch (exp)
		{
		case 1:
		{
			add = 50;
			break;
		}
		case 2:
		{
			add = 40;
			break;
		}
		case 3:
		{
			add = 35;
		}
		}
		hh = 250;
		switch (hour)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		{
			hourly = hour * hh; // fixed here
			over = 0.0;
			total = hourly + over;
			net = total - add;
			break;
		}
		default:
		{
			hourly = (hour * hh);
			over = (hour - 40) * hh * a;
			total = hourly + over * b; // fixed here
			net = total - add;
		}
		}

		break;
	}
	case 3:
	{
		cout << "ADDITIONAL INSURANACE" << endl;
		cout << "1. Medical Insurance" << endl;
		cout << "2. Dental Insurance" << endl;
		cout << "3. Long-term Disability" << endl;
		cout << "input the number of additional insurance: ";
		cin >> exp;
		switch (exp)
		{
		case 1:
		{
			add = 50;
			break;
		}
		case 2:
		{
			add = 40;
			break;
		}
		case 3:
		{
			add = 35;
		}
		}
		hh = 300;
		switch (hour)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		{
			hourly = hour * hh; //fixed here
			over = 0.0;
			total = hourly + over;
			net = total - add;
			break;
		}
		default:
		{
			hourly = (hour * hh);
			over = (hour - 40) * hh * a;
			total = hourly + over * b; //fixed here
			net = total - add;
		}
		}

		break;
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