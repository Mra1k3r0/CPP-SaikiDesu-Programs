#include <iostream>
using namespace std;

int main()
{
	int resi, hr;
  cout<<"1. Apartment"<<endl;
  cout<<"2. House"<<endl;
  cout<<"3. Dormitory"<<endl;
  cin>>resi;
  
  switch(resi)
  {
  	case 1:
  	{
  		cout<<"Please input your available hour: ";
  		cin>>hr;
  		if(hr>=18) //18 or more
  		{
  			cout<<"Pot-belled pig";
  		}
  		else if((hr>=10) && (hr<=17)) //10 to 17
  		{
  			cout<<"Dog";
  		}
  		else if(hr<10) //Fewer than 10
  		{
  			cout<<"Snake";
  		}
  		break;
  	}
  	case 2:
  	{
  		cout<<"Please input your available hour: ";
  		cin>>hr;
  		if(hr>=10) //10 or more
  		{
  			cout<<"Cat";
  		}
  		else if(hr<10)  //Fewer than 10
  		{
  			cout<<"Hamster";
  		}
  		break;
  	}
  	case 3:
  	{
  		cout<<"Please input your available hour: ";
  		cin>>hr;
  		if(hr>=6) //6 or more
  		{
  			cout<<"Fish";
  		}
  		else if(hr<6) //Fewer than 6
  		{
  			cout<<"Ant Farm";
  		}	
  	}
  }
  return 0;
}