#include <iostream>
using namespace std;

// Base class
class Tattoo {
public:
    // Virtual function
    virtual void describe() {
        cout << "This is a tattoo." << endl;
    }

    // Virtual destructor
    virtual ~Tattoo() {
        cout << "Tattoo destroyed." << endl;
    }
};

// Derived class for flower tattoos
class FlowerTattoo : public Tattoo {
public:
    void describe() override { // Override the base class method
        cout << "This is a beautiful flower tattoo." << endl;
    }

    ~FlowerTattoo() {
        cout << "Flower tattoo destroyed." << endl;
    }
};

// Derived class for animal tattoos
class AnimalTattoo : public Tattoo {
public:
    void describe() override { // Override the base class method
        cout << "This is a fierce animal tattoo." << endl;
    }

    ~AnimalTattoo() {
        cout << "Animal tattoo destroyed." << endl;
    }
};

int main() {
    Tattoo* tattoo1 = new FlowerTattoo(); // Base class pointer to derived class object
    Tattoo* tattoo2 = new AnimalTattoo();

    // Call the virtual function
    tattoo1->describe(); // Outputs: This is a beautiful flower tattoo.
    tattoo2->describe(); // Outputs: This is a fierce animal tattoo.

    // Clean up
    delete tattoo1; // Calls FlowerTattoo's destructor followed by Tattoo's destructor
    delete tattoo2; // Calls AnimalTattoo's destructor followed by Tattoo's destructor

    return 0;
}

