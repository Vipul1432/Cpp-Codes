#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n;
cout<<"Enter a number : ";
cin>>n;
int sum = 0;
int originaln = n;
while(n > 0) {
    int lastdigit = n%10;
     sum += pow(lastdigit,3);
     n = n/10;
}
  if (sum == originaln)
     cout<<"Armstrong number";
  else 
     cout<<"Not Armstrong number";

  return 0;
}