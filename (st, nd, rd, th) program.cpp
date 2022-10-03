#include <iostream>
using namespace std;

int main()
{
	float i;
	cout<<"Enter a number: ";
	cin>>i;
if (i == 1) 
{
    cout<<i<<"st";
} else if (i == 2)
 {
    cout<<i<<"nd";
} else if (i == 3)
 {
    cout<<i<<"rd";
}
else
{
	cout<<i<<"th";
}
return 0;
}