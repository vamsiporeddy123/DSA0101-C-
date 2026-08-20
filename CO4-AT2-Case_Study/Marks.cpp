#include <iostream>
using namespace std;

class Marks {
protected:
    float m1, m2, m3;

public:
    void accept() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Total : public Marks {
protected:
    float total;

public:
    void calculateTotal() {
        total = m1 + m2 + m3;
    }
};

class Percentage : public Total {
public:
    void display() {
        float per = total / 3;
        cout << "Total Marks = " << total << endl;
        cout << "Percentage = " << per << "%" << endl;
    }
};

int main() {
    Percentage p;

    p.accept();
    p.calculateTotal();
    p.display();

    return 0;
}
