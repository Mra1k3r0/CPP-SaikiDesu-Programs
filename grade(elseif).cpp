#include <iostream>
using namespace std;

int main()
{
int grade;
cout<<"enter your grade: ";
cin>>grade;

	if((grade>=91) && (grade<=100)){
		cout<<"A+";
		}
		else if((grade>=81) && (grade<=90))	
		{
		cout<<"B-";
		}
		else if((grade>=76) && (grade<=80))
		{
		cout<<"C";
		}	
		else if((grade>=70) && (grade<=75))
		{
		cout<<"D";
		}
		return 0;
}