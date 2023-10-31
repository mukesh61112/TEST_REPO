#include <iostream>

// Base class (abstract class) with a virtual function and destructor
class Base {
public:
    // Virtual function
    virtual void virtualFunction() {
        std::cout << "Base::virtualFunction()" << std::endl;
    }

    // Virtual destructor
    virtual ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

// Derived class that inherits from Base
class Derived : public Base {
public:
    // Override the virtual function
    void virtualFunction() override {
        std::cout << "Derived::virtualFunction()" << std::endl;
    }

    // Destructor (not virtual, but it's still called through Base destructor)
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    // Create a Base pointer and assign it to a Derived object
     Base* basePtr = new Derived;

    // Call the virtual function
    basePtr->virtualFunction();

    // Delete the object (calls the appropriate destructor)
    delete basePtr;

    return 0;
}
