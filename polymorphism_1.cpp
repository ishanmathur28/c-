#include<iostream>
using namespace std;
class Base { 
public: 
virtual void msg() { cout<<" In Base \n";} 
}; 
class Derived: public Base { 
public: 
void msg() {cout<<"In Derived \n";} 
}; 
int main() { 
Derived d; Base *b;
b = &d;  b->msg();	  // Output: In Derived
}


