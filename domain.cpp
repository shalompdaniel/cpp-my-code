#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int id;
    string email;
    string phoneNo;

public:
    
    Student() : id(0), email("gmail"), phoneNo("gmail") {
        cout << "Default constructor called" << endl;
    }

    
    Student(int id, const string& email, const string& phoneNo)
        : id(id), email(email), phoneNo(phoneNo) {
        cout << "Parameterized constructor called" << endl;
    }

    
    Student(const Student& other)
        : id(other.id), email(other.email), phoneNo(other.phoneNo) {
        cout << "Copy constructor called" << endl;
    }

    
    ~Student() {
        cout << "Destructor called" << endl;
    }

    
    void display() const {
        cout << "Student ID: " << id << endl;
        cout << "Email: " << email << endl;
        cout << "Phone Number: " << phoneNo << endl;
    }

    
    void input() {
        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore(); 

        cout << "Enter student email: ";
        getline(cin, email);

        cout << "Enter student phone number: ";
        getline(cin, phoneNo);
    }
};

int main() {
    
    Student student1;
    student1.input(); 
    cout << "Details of student1:" << endl;
    student1.display();
    cout << endl;

    
    Student student2(102, "jane.doe@example.com", "123-456-7890");
    cout << "Details of student2:" << endl;
    student2.display();
    cout << endl;

        Student student3 = student2; 
    cout << "Details of student3 (copy of student2):" << endl;
    student3.display();

    return 0;
}


