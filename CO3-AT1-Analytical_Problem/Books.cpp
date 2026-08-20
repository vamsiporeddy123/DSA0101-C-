#include <iostream>
using namespace std;

class books {
    string author, title, publisher;
    float price;
    int stock;

    void updatePrice(float p) {
        price = p;
    }

public:
    static int success, failure;

    books(string a, string t, float p, string pub, int s) {
        author = a;
        title = t;
        price = p;
        publisher = pub;
        stock = s;
    }

    void search(string t, string a, int copies) {
        if (title == t && author == a) {
            cout << "Book Available\n";
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
            cout << "Publisher: " << publisher << endl;

            if (copies <= stock) {
                cout << "Total Cost: " << price * copies << endl;
                stock -= copies;
                success++;
            } else {
                cout << "Required copies not in stock\n";
                failure++;
            }
        } else {
            cout << "Book not available\n";
            failure++;
        }
    }

    void changePrice(float p) {
        updatePrice(p);
    }
};

int books::success = 0;
int books::failure = 0;

int main() {
    books b("R.K. Narayan", "Malgudi Days", 300, "Penguin", 10);

    b.search("Malgudi Days", "R.K. Narayan", 2);

    b.changePrice(350);

    cout << "\nSuccessful Transactions: " << books::success;
    cout << "\nUnsuccessful Transactions: " << books::failure;

    return 0;
}
