#include <iostream>
using namespace std;
class base {
    public:
    void display() {
        cout<<"Function of base class"<<endl;
    }
};
class derived : public base {
    public:
    void display() {
        cout<<"Function of derived class"<<endl;
    }
};
int main() {
   derived d;
  base *b = &d;   //base class pointer
  b->display();   //base class function executes
  return 0;
}
