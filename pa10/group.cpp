#include"group.h"
ostream& operator<<(ostream& os, const Group& group) {
    os << "Group Name: " << group.name << ", Group ID: " << group.groupID << ", Responsibility: " << group.responsibility << endl;
    os << "Members:" << endl;
    for (const auto& member : group.members) {
        os << member << endl;
    }
    return os;
}

istream& operator>>(istream& is, Group& group) {
    cout << "Enter group name: ";
    is >> group.name;
    cout << "Enter group ID: ";
    is >> group.groupID;
    cout << "Enter group responsibility: ";
    is >> group.responsibility;
    return is;
}

Group operator+(const Group& group1, const Group& group2) {
    Group mergedGroup(group1.name + group2.name, group1.groupID + group2.groupID, group1.responsibility + ", " + group2.responsibility);
    mergedGroup.members = group1.members;
    mergedGroup.members.insert(mergedGroup.members.end(), group2.members.begin(), group2.members.end());
    return mergedGroup;
}

Group operator-(const Group& group, int percent) {
    Group newGroup(group.name, group.groupID, group.responsibility);
    newGroup.members = group.members;
    newGroup.removeMembers(percent);
    return newGroup;
}