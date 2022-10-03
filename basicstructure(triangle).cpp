#include <iostream>
using namespace std;

int main()
{
	int n = 15;
	int i, j;
	
for(i=1; i<=n; i++)
{
for(int j=n; j>=1; j--)
{
	if(i>=j)
	cout<<" *";
	else
	cout<<" ";
}
cout<<endl;
}
return 0;
}