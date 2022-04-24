// Sum of n number given by users :-

// #include <iostream>
// using namespace std;
// int main() {
// int n;
// cout<<"Enter a number : ";
// cin>>n;
// int sum = 0;
// for (int i = 0; i <=n; i++) {
//    sum = sum + i;
// }
// cout<<"The sum of n number is ", cout<<sum;
// return 0;
// }


// Reverse a number given by a user :- 

#include <iostream>
using namespace std;
int main() {
int n;
cout<<" Enter a number : ";
cin>>n;
int reverse = 0;
        while (n > 0) {
            int lastdigit = n % 10;
            reverse = reverse*10 + lastdigit;
            n = n/10;
        }
        cout<<"The reverse of number is ", cout<<reverse;
return 0;
}