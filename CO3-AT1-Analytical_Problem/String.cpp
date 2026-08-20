#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[50];

public:
    String(char s[] = "") {
        strcpy(str, s);
    }

    bool operator == (String s) {
        return strcmp(str, s.str) == 0;
    }

    bool operator > (String s) {
        return strcmp(str, s.str) > 0;
    }

    bool operator < (String s) {
        return strcmp(str, s.str) < 0;
    }
};

int main() {
    String a("Hello");
    String b("World");

    if (a == b)
        cout << "Strings are equal";
    else if (a > b)
        cout << "First string is greater";
    else
        cout << "First string is smaller";

    return 0;
}
