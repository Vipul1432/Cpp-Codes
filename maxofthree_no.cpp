#include <iostream>
using namespace std;
int main() {
    int a,b,c;
cout<<"Enter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
cout<<"Enter third number : ";
cin>>c;
int max = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
cout<<max;
return 0;
}