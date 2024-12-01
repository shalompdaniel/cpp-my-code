#include <iostream>
#include <string>

class Contact {
private:
    std::string name;
    std::string email;
    std::string phoneNumber;

public:
    
    Contact() : name("Unknown"), email("not_provided@example.com"), phoneNumber("000-000-0000") {}

    
    Contact(const std::string &n) : name(n), email("not_provided@example.com"), phoneNumber("000-000-0000") {}

    Contact(const std::string &n, const std::string &e) : name(n), email(e), phoneNumber("000-000-0000") {}

    
    Contact(const std::string &n, const std::string &e, const std::string &p) : name(n), email(e), phoneNumber(p) {}

    
    void display() const {
        std::cout << "Name: " << name << ", Email: " << email << ", Phone Number: " << phoneNumber << std::endl;
    }
};

int main() {
    
    Contact contacts[] = {
        Contact(),                                    
        Contact("Alice"),                            
        Contact("Bob", "bob@example.com"),           
        Contact("Charlie", "charlie@example.com", "123-456-7890") 
    };

    
    for (const auto &contact : contacts) {
        contact.display();
    }

    return 0;
}

