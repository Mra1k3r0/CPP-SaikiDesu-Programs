#include <iostream>
using namespace std;
  
int main() {
    float fah, cel;
  
    cout << "Input a degree in celsius: ";
    cin >> cel;
    fah = (9.0/5.0) * cel + 32;
  
    cout << cel <<" Celsius is equal to " << fah <<" Fahrenheit";
    return 0;
}