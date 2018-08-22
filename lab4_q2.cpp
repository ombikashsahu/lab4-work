#include<iostream>
using namespace std;
int main(){
float tempc, tempf;
cout << "Enter the temperature in celius";
cin >> tempc;
tempf = (tempc * 9)/5 +32;
cout << "the temperature in farenheit is " << tempc<< endl;
return 0;
}
