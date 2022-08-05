#include <iostream>
using namespace std;
class ABC {
int a,b;
public:
// required constructors
ABC() {
a=0;b=0; }
ABC(int h, int m) {
a = h;
b = m;
}
// method to display ABC
void displayABC() {
cout << "a: " <<a << " b:" << b <<endl;
}
// overloaded prefix ++ operator
void operator++ ()
{ cout<<"\n prefix op called:\n";
++a;
++b;
}
// overloaded postfix ++ operator
ABC operator++( int ) {
cout<<"\n postfix op called:\n";
a++;
b++;
}
};
int main() {
ABC T1(11, 59), T2(10,40);
// ++T1; // increment T1
T1.operator++();
T1.displayABC(); // display T1
++T1; // increment T1 again
T1.displayABC(); // display T1
T2++; // increment T2
T2.displayABC(); // display T2
T2++; // increment T2 again
T2.displayABC(); // display T2
return 0;
}

