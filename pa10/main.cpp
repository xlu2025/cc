#include"group.h"

int main() {
    // Test scenarios

    // Create two groups
    Group group1("Group 1", 1, "Sales");
    Group group2("Group 2", 2, "Marketing");

    // Add employees to groups
    Employee employee1("John", "john@example.com", "Sales Manager", 1);
    Employee employee2("Alice", "alice@example.com", "Marketing Specialist", 2);
    Employee employee3("Bob", "bob@example.com", "Sales Representative", 1);
    Employee employee4("Eve", "eve@example.com", "Marketing Manager", 2);
    Employee employee5("Jack", "jack@example.com", "Marketing Manager", 2);

    group1.addMember(employee1);
    group1.addMember(employee3);
    group2.addMember(employee2);
    group2.addMember(employee4);
    group2.addMember(employee5);

    // Print groups
    cout << "Initial Groups:" << endl;
    cout << group1 << endl;
    cout << group2 << endl;

    // Merge groups
    Group mergedGroup = group1 + group2;
    cout << "Merged Group:" << endl;
    cout << mergedGroup << endl;

    // Remove employees from merged group
    mergedGroup = mergedGroup - 20; // Remove 20% of employees
    cout << "Merged Group after removing 20% of employees:" << endl;
    cout << mergedGroup << endl;

    return 0;
}
