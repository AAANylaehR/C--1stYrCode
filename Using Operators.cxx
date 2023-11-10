#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main (){

float num1, num2;
  
cout<<"Enter Num1:" <<endl;
cin >> num1;
cout << "Enter Num2:" <<endl;
cin >> num2;
  
cout << "Sum is equal to: " <<num1+num2
     << "\nDifferent is equal to: " <<num1-num2 
     << "\nProduct is equal to: "<<num1*num2
     << "\nQuotient is equal to: "<<num1/num2 
     <<endl;
return 0;
}
