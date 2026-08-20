#include <iostream>
using namespace std;

class Item {
protected:
    int item_no;
    string name;
    float price;

public:
    void accept() {
        cout << "Enter item number: ";
        cin >> item_no;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;
    }
};

class DiscountedItem : public Item {
    float discount;
    float finalPrice;

public:
    void calculate() {
        cout << "Enter discount percentage: ";
        cin >> discount;

        finalPrice = price - (price * discount / 100);
    }

    void display() {
        cout << item_no << "\t"
             << name << "\t"
             << price << "\t"
             << discount << "%\t"
             << finalPrice << endl;
    }

    float getFinalPrice() {
        return finalPrice;
    }
};

int main() {
    DiscountedItem item[20];
    int n;
    float total = 0;

    cout << "Enter number of items: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << endl;
        item[i].accept();
        item[i].calculate();
    }

    cout << "\nItem No\tName\tPrice\tDiscount\tFinal Price\n";

    for (int i = 0; i < n; i++) {
        item[i].display();
        total += item[i].getFinalPrice();
    }

    cout << "\nTotal Amount = " << total << endl;

    return 0;
}
