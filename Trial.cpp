#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    void whoAmI() {
        cout << "I am an animal." << endl;
    }
};

// Intermediate classes inheriting from Animal
class Herbivore : virtual public Animal {
public:
    void eatGrass() {
        cout << "I eat grass." << endl;
    }
};

class Carnivore : virtual public Animal {
public:
    void eatMeat() {
        cout << "I eat meat." << endl;
    }
};

// Derived class inheriting from both Herbivore and Carnivore
class Omnivore : public Herbivore, public Carnivore {
public:
    // Inherited members from Animal, Herbivore, and Carnivore
    // This will cause ambiguity and potential conflicts
};

int main() {
    Omnivore ov;
    
    // Ambiguity arises when calling methods inherited from both Herbivore and Carnivore
    // ov.whoAmI(); // Error: Ambiguity
    // ov.eatGrass(); // Error: Ambiguity
    // ov.eatMeat(); // Error: Ambiguity
    
    return 0;
}
