#include <iostream>
using namespace std;

class Worker {
protected:
    int code;
    string name;
    float salary;

public:
    void getWorker() {
        cout << "Enter code: ";
        cin >> code;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }
};

class Officer {
protected:
    float DA, HRA;

public:
    void getOfficer() {
        cout << "Enter DA: ";
        cin >> DA;

        cout << "Enter HRA: ";
        cin >> HRA;
    }
};

class Manager : public Worker, public Officer {
    float TA, gross_sal;

public:
    void calculate() {
        TA = salary * 10 / 100;
        gross_sal = salary + DA + HRA + TA;
    }

    void display() {
        cout << "\nCode: " << code;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nDA: " << DA;
        cout << "\nHRA: " << HRA;
        cout << "\nTA: " << TA;
        cout << "\nGross Salary: " << gross_sal;
    }
};

int main() {
    Manager m;

    m.getWorker();
    m.getOfficer();
    m.calculate();
    m.display();

    return 0;
}
