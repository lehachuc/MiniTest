#include "Manager.h"

Manager::Manager(std::string n, int id) : name(n), managerID(id) {}

std::string Manager::getName() {
    return name;
}

int Manager::getID() {
    return managerID;
}

void Manager::manageStore() {
    // Add implementation for managing the store
}
