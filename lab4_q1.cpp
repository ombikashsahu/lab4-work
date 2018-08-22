#include<iostream>
using namespace std;
int main() {
float lengthcm, lengthm, lengthkm;
cout << "Enter the length in cm ? ";
cin >> lengthcm;
lengthm = lengthcm/100;
lengthkm = lengthcm/1000;
cout << "The length in meter is " << lengthm<< endl<< "m The length in km is" <<lengthkm <<endl; 
return 0;

}
