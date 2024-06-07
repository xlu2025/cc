#include"employee.h"


ostream& operator<<(ostream& os, const Employee& employee) {
    os << "Name: " << employee.name << ", Email: " << employee.email << ", Role: " << employee.role;
    return os;
}

istream& operator>>(istream& is, Employee& employee) {
    cout << "Enter employee name: ";
    is >> employee.name;
    cout << "Enter employee email: ";
    is >> employee.email;
    cout << "Enter employee role: ";
    is >> employee.role;
    return is;
}