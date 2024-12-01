#include <iostream>
#include <string>

class Tattoo {
private:
    std::string design;
    std::string artist;
    int size; // Size of the tattoo in square inches

public:
    // Constructor
    Tattoo(const std::string& d, const std::string& a, int s) 
        : design(d), artist(a), size(s) {
        std::cout << "Tattoo '" << design << "' by " << artist << " created." << std::endl;
    }

    // Destructor
    ~Tattoo() {
        std::cout << "Tattoo '" << design << "' by " << artist << " destroyed." << std::endl;
    }

    // Function to display tattoo details
    void display() const {
        std::cout << "Design: " << design << ", Artist: " << artist << ", Size: " << size << " sq in" << std::endl;
    }
};

class TattooStudio {
private:
    Tattoo** tattoos; // Pointer to an array of Tattoo pointers
    int count;       // Number of tattoos
    int capacity;    // Capacity of the tattoo array

public:
    // Constructor
    TattooStudio(int cap) : count(0), capacity(cap) {
        tattoos = new Tattoo*[capacity]; // Dynamic allocation of Tattoo pointers
        std::cout << "Tattoo studio created with capacity: " << capacity << std::endl;
    }

    // Destructor
    ~TattooStudio() {
        for (int i = 0; i < count; ++i) {
            delete tattoos[i]; // Deallocate each Tattoo
        }
        delete[] tattoos; // Deallocate the array of pointers
        std::cout << "Tattoo studio destroyed." << std::endl;
    }

    // Function to add a new tattoo
    void addTattoo(const std::string& design, const std::string& artist, int size) {
        if (count < capacity) {
            tattoos[count++] = new Tattoo(design, artist, size); // Allocate new Tattoo
        } else {
            std::cout << "Tattoo studio is at full capacity!" << std::endl;
        }
    }

    // Function to display all tattoos
    void displayTattoos() const {
        std::cout << "Tattoos in the studio:" << std::endl;
        for (int i = 0; i < count; ++i) {
            tattoos[i]->display(); // Display each Tattoo
        }
    }
};

int main() {
    TattooStudio studio(3); // Create a studio with capacity for 3 tattoos

    // Add tattoos to the studio
    studio.addTattoo("Dragon", "Alice", 12);
    studio.addTattoo("Rose", "Bob", 8);
    studio.addTattoo("Skull", "Charlie", 10);
    
    // Attempt to add another tattoo beyond capacity
    studio.addTattoo("Phoenix", "Diana", 15); // Should print a capacity message

    // Display all tattoos
    studio.displayTattoos();

    // The destructor will be called automatically when studio goes out of scope
    return 0;
}

