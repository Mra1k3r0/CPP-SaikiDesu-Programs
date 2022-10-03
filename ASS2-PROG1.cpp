//Write a program that prompts an employee for an hourly pay and hours worked. Compute gross pay (hours times rate), withholding tax, and net pay (gross pay – withholding tax). Withholding tax is computed as percentage of gross pay based on the following:

#include <iostream>
using namespace std;

int main()
{
	double p, h;
	double s, w, n;
	cout<<"Enter hour of pay: ";
	cin>>p;
	cout<<"Number of hours worked: ";
	cin>>h;
	s = p * h;
	cout<<"Gross pay: "<<s<<endl;
	if((s>=0) && (s<=300.00)){
		w = s * 0.1;
		n = s - w;
		cout<<"Withholding tax: "<<w<<endl;
		cout<<"Net Pay: "<<n;
	}
	else if((s>=301.01) && (s<=400.00))
	{
		w = s * 0.12;
		n = s - w;
		cout<<"Withholding tax: "<<w<<endl;
		cout<<"Net Pay: "<<n;
	}
	else if((s>=400.01) && (s<=500.00))
	{
		w = s * 0.15;
	    n = s - w;
		cout<<"Withholding tax: "<<w<<endl;
		cout<<"Net Pay: "<<n;
	}
	else if((s>=500.01) && (s<=1000000000))
	{
		w = s * 0.2;
	    n = s - w;
		cout<<"Withholding tax: "<<w<<endl;
		cout<<"Net Pay: "<<n;
	}
	return 0;
}