#include <iostream>
using namespace std;

class Person {
protected:
    string name, address;
    long phone_no;

public:
    void acceptPerson() {
        cout << "Name: ";
        cin >> name;
        cout << "Address: ";
        cin >> address;
        cout << "Phone: ";
        cin >> phone_no;
    }
};

class Employee : public Person {
    int eno;
    string ename;

public:
    void accept() {
        cout << "\nEmployee Number: ";
        cin >> eno;
        cout << "Employee Name: ";
        cin >> ename;
        acceptPerson();
    }

    void display() {
        cout << "\nEmployee Number: " << eno;
        cout << "\nEmployee Name: " << ename;
        cout << "\nAddress: " << address;
        cout << "\nPhone: " << phone_no << endl;
    }
};

class Manager : public Person {
    string designation, department_name;
    float basic_salary;

public:
    void accept() {
        cout << "\nDesignation: ";
        cin >> designation;
        cout << "Department: ";
        cin >> department_name;
        cout << "Basic Salary: ";
        cin >> basic_salary;
        acceptPerson();
    }

    void display() {
        cout << "\nDesignation: " << designation;
        cout << "\nDepartment: " << department_name;
        cout << "\nBasic Salary: " << basic_salary;
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nPhone: " << phone_no << endl;
    }

    float getSalary() {
        return basic_salary;
    }

    string getName() {
        return name;
    }
};

int main() {
    Employee e[10];
    Manager m[10];

    int ne, nm, choice;

    cout << "Enter number of employees: ";
    cin >> ne;

    cout << "Enter number of managers: ";
    cin >> nm;

    do {
        cout << "\n1. Accept Details";
        cout << "\n2. Display Details";
        cout << "\n3. Highest Paid Manager";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < ne; i++)
                e[i].accept();

            for (int i = 0; i < nm; i++)
                m[i].accept();
            break;

        case 2:
            cout << "\n--- Employees ---\n";
            for (int i = 0; i < ne; i++)
                e[i].display();

            cout << "\n--- Managers ---\n";
            for (int i = 0; i < nm; i++)
                m[i].display();
            break;

        case 3: {
            int pos = 0;

            for (int i = 1; i < nm; i++) {
                if (m[i].getSalary() > m[pos].getSalary())
                    pos = i;
            }

            cout << "\nHighest Paid Manager: "
                 << m[pos].getName() << endl;
            cout << "Salary: " << m[pos].getSalary() << endl;
            break;
        }

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}
