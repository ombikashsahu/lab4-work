#include<iostream>
using namespace std;
int main(){
float ang1, ang2, ang3 ;
cout << "find angle of the triangle"<<endl;
cout << "input the first angle"<<endl;
cin >> ang1;
cout << "input the second angle" <<endl;
cin >> ang2;
ang3= 180-(ang1 + ang2);
cout << "the third angle is "<< ang3;
return 0;
}
