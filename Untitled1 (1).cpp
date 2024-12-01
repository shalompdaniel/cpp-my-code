#include <iostream>
#include <string> // Include string header for std::string

int main() {
    std::string adminphone = "1234567890";
    std::string adminemail = "admin@gmail.com";
    std::string adminpassword = "password123";

    std::string inputphone;
    std::string inputemail;
    std::string inputpassword;

    std::cout << "Enter phone number: ";
    std::cin >> inputphone;

    std::cout << "Enter email: ";
    std::cin >> inputemail;

    std::cout << "Enter the password: ";
    std::cin >> inputpassword;

    if (inputphone == adminphone && inputemail == adminemail && inputpassword == adminpassword) {
        std::cout << "Login successful" << std::endl;
    } else {
        std::cout << "Login failed" << std::endl;
    }

    return 0;
}
