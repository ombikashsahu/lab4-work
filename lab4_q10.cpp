#include<iostream>
#include<cmath>
using namespace std;
int main(){
float p, r, t, ci;
cout<<"enter princliple, rate, time";
cin>>p>>r>>t;
ci=p*pow((1+r/100),t) -p;
cout <<" the comp intrest is"<<ci;
return 0;
}

