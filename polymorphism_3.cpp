class Base {
public: 
virtual void msg() = 0;    
};
class Derived: public Base {
public: 
void msg(){ cout << " In derived class"<<endl; }
};
int main() {
Base *b;     Derived obj; 		
b = &obj;	b->msg();	// Output: In derived class
}


