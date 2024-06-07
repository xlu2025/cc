#pragma once
#include"employee.h"
class Group {
private:
    string name;
    int groupID;
    string responsibility;
    vector<Employee> members;

public:
    Group(string name, int groupID, string responsibility)
        : name(name), groupID(groupID), responsibility(responsibility) {}

    void addMember(const Employee& employee) {
        members.push_back(employee);
    }

    void removeMembers(int percent) {
        size_t numToRemove = (members.size() * percent) / 100;
        members.resize(members.size() - numToRemove);
    }

    void mergeGroups(const Group& otherGroup) {
        members.insert(members.end(), otherGroup.members.begin(), otherGroup.members.end());
    }

    friend ostream& operator<<(ostream& os, const Group& group);
    friend istream& operator>>(istream& is, Group& group);
    friend Group operator+(const Group& group1, const Group& group2);
    friend Group operator-(const Group& group, int percent);
};