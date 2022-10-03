#include <iostream>
using namespace std;

int main()
{
	int menu, many;
	float total;
	int c = 49; 
	int p = 20; 
	int i = 15;
	
	cout<<"1. Cheeseburger - "<<c<<endl<<"2. Pepsi - "<<p<<endl<<"3. Chips - "<<i<<endl;
	cout<<"Choose one: ";
	cin>>menu;
	cout<<"Input how many: ";
	cin>>many;
	
	switch(menu){
		case 1:
		{
	     total = c * many;
	     cout<<total;
	     break;
		}
		case 2:
		{
	     total = p * many;
	     cout<<total;
	     break;
		}
		case 3:
		{
	     total = i * many;
	     cout<<total;
		}
	}
	
	
//	cout<<"total: "<<c+p+i;
}