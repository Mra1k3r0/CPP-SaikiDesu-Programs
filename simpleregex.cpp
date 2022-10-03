#include <iostream>
#include <regex> 
#include <string.h>
using namespace std;

int main()
{

string nam = "bat ganon sinabon ko naman";

 
regex regexp("[A-Za-z0-9]+\\s[A-Za-z0-9]+\\s[A-Za-z0-9]+\\s[A-Za-z0-9]+\\s[A-Za-z0-9]+");

smatch m; 
  
    // regex_search that searches pattern regexp in the string mystr  
regex_search(nam, m, regexp); 
for (auto x : m) 
      cout << x << " "; 
   //   cout<<m;


}