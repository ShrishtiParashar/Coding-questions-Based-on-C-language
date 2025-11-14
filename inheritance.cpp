#include <iostream>
using namespace std;
class A {
public:
    void show() {
        cout << "Hello from A \n";
    }
};
class B : public A {
};
class C : public A {
};
class D : public B, public C {
};
int main() {
    D obj;
    // obj.show(); // This line would cause a compilation error due to ambiguity
    obj.B::show(); // Resolving ambiguity by specifying the path
    obj.C::show(); // Resolving ambiguity by specifying the path
    return 0;
}