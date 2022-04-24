#include <iostream>
using namespace std;
int main() {
int a;
a = 12;
cout<<"size of int "<<sizeof(a)<<endl;

float b;
cout<<"size of float "<<sizeof(b)<<endl;

char c;
cout<<"size of character "<<sizeof(c)<<endl;

bool d;
cout<<"size of boolean "<<sizeof(d)<<endl;
short int si;
long int li;
cout<<"size of short int "<<sizeof(si)<<endl;
cout<<"size of long int "<<sizeof(li)<<endl;
return 0;
}