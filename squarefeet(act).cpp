#include <iostream>
using namespace std;

int main()
{
	int s;
	cout<<"Input the square feet: ";
	cin>>s;
	
	if(s<4000)
	{
		cout<<"The cost above 4,000 square feet is: $25";
	}
	else if(s>=4000 && s<6000)
	{
		cout<<"The cost for 4,000 square feet or more but under 6,000 square feet is: $35";
	}
	else{
		cout<<"The cost for 6,000 or more than is: $50";
	}
}
