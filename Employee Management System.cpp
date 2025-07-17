#include <iostream>
#include <vector>
using namespace std;
class Employee {
    string name;
    string role;
public:
    virtual void addInfo() = 0;
    virtual void displayInfo() = 0;
    virtual void calculateSalary() = 0;
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    void setRole(string role) {
        this->role = role;
    }
    string getRole() {
        return role;
    }
};
class Manager : public Employee {
public:
    int multiplier = 3; 
    void addInfo() override {
        string name, role;
        cout << "Enter name: ";
        cin.ignore(); 
        getline(cin, name); 
        cout << "Enter role: ";
        cin >> role;
        setName(name);
        setRole(role);
    }
    void displayInfo() override {
        cout << "Manager Info: " << endl;
        cout << "Name: " << getName() << ", Role: " << getRole() << endl;
    }
    void calculateSalary() override {
        int baseSalary = 50000; 
        int totalSalary = baseSalary * multiplier;
        cout << "Salary for Manager " << getName() << ": " << totalSalary << endl;
    }
};
class Engineer : public Employee {
public:
    int multiplier = 2; 
    void addInfo() override {
        string name, role;
        cout << "Enter name: ";
        cin.ignore(); 
        getline(cin, name); 
        cout << "Enter role: ";
        cin >> role;
        setName(name);
        setRole(role);
    }
    void displayInfo() override {
        cout << "Engineer Info: " << endl;
        cout << "Name: " << getName() << ", Role: " << getRole() << endl;
    }
    void calculateSalary() override {
        int baseSalary = 40000; // Engineer base salary
        int totalSalary = baseSalary * multiplier;
        cout << "Salary for Engineer " << getName() << ": " << totalSalary << endl;
    }
};
int main() {
    int choice;
    vector<Manager> managers; // Store multiple Managers
    vector<Engineer> engineers; // Store multiple Engineers
    while (true) { 
        cout << "--- Employee Management System ---\n";
        cout << "1. Add Employee\n"
             << "2. Display Employee Info\n"
             << "3. Calculate Salary\n"
             << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        if (choice == 4) break; 
        switch (choice) { 
            case 1: {
                cout << "Choose Employee Type:\n1. Manager\n2. Engineer\n";
                int empType;
                cin >> empType;
                if (empType == 1) {
                    Manager m;
                    m.addInfo();
                    managers.push_back(m);
                } else if (empType == 2) {
                    Engineer e;
                    e.addInfo();
                    engineers.push_back(e);
                } else {
                    cout << "Invalid employee type.\n";
                }
                break;
            }
            case 2: {
                cout << "Choose Employee Type to Display:\n1. Manager\n2. Engineer\n";
                int empType;
                cin >> empType;
                if (empType == 1) {
                    if (managers.empty()) {
                        cout << "No managers to display.\n";
                    } else {
                        for (size_t i = 0; i < managers.size(); ++i) {
                            cout << "Manager #" << (i+1) << ":\n";
                            managers[i].displayInfo();
                        }
                    }
                } else if (empType == 2) {
                    if (engineers.empty()) {
                        cout << "No engineers to display.\n";
                    } else {
                        for (size_t i = 0; i < engineers.size(); ++i) {
                            cout << "Engineer #" << (i+1) << ":\n";
                            engineers[i].displayInfo();
                        }
                    }
                } else {
                    cout << "Invalid employee type.\n";
                }
                break;
            }
            case 3: {
                cout << "Choose Employee Type to Calculate Salary:\n1. Manager\n2. Engineer\n";
                int empType;
                cin >> empType;
                if (empType == 1) {
                    if (managers.empty()) {
                        cout << "No managers to calculate salary.\n";
                    } else {
                        for (size_t i = 0; i < managers.size(); ++i) {
                            cout << "Manager #" << (i+1) << ":\n";
                            managers[i].calculateSalary();
                        }
                    }
                } else if (empType == 2) {
                    if (engineers.empty()) {
                        cout << "No engineers to calculate salary.\n";
                    } else {
                        for (size_t i = 0; i < engineers.size(); ++i) {
                            cout << "Engineer #" << (i+1) << ":\n";
                            engineers[i].calculateSalary();
                        }
                    }
                } else {
                    cout << "Invalid employee type.\n";
                }
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }


}