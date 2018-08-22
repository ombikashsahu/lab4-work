#include<iostream>
#include<math.h>
using namespace std;
int main (){
float s1, area;
cout << "calculate the arae of the equilateral triangle"<<endl;
cout << "input the value of the side of the equilateral triangle" ;
cin >> s1;
area= sqrt(3.0)/4*(s1*s1);
cout << "the area of the triangle is" <<area<<endl;
return 0;

}
