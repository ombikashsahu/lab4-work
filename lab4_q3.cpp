#include<iostream>
using namespace std;
int main(){
float tempf, tempc;
cout << "Enter the temp in fareheit";
cin >> tempf;
tempc= (tempf-32) *(5.0/9.0);
cout << "the temperature in celcius is" <<tempc;
return 0;
}
