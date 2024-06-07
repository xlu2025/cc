#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Employee {
private:
    string name;
    string email;
    string role;
    int groupID;

public:
    Employee(string name="", string email="", string role="", int groupID=0)
        : name(name), email(email), role(role), groupID(groupID) {}

    string getName() const { return name; }
    string getEmail() const { return email; }
    string getRole() const { return role; }
    int getGroupID() const { return groupID; }

    friend ostream& operator<<(ostream& os, const Employee& employee);
    friend istream& operator>>(istream& is, Employee& employee);
};