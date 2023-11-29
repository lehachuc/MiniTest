#ifndef MANAGER_H
#define MANAGER_H

#include <string>

class Manager {
private:
    std::string name;
    int managerID;
public:
    Manager(std::string n, int id);
    std::string getName();
    int getID();
    void manageStore();
};

#endif
