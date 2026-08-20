#include <iostream>
using namespace std;

class BankAccount {
    string name, type;
    int accno;
    float balance;

public:
    BankAccount(string n, int a, string t, float b) {
        name = n;
        accno = a;
        type = t;
        balance = b;
    }

    void deposit(int a, string n, float amount) {
        if (a == accno && n == name) {
            balance += amount;
            cout << "Amount Deposited\n";
        } else {
            cout << "Invalid account details\n";
        }
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn\n";
        } else {
            cout << "Insufficient Balance\n";
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    ~BankAccount() {
        cout << "Account object destroyed\n";
    }
};

int main() {
    BankAccount b("Achu", 1234, "Savings", 5000);

    b.deposit(1234, "Achu", 2000);
    b.withdraw(1000);
    b.display();

    return 0;
}
