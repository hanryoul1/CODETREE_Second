#include <iostream>
using namespace std;

int main() {

    int sex;
    int age;

    cin >> sex;
    cin >> age;

    if (sex == 0) {
        if (age >= 19)
            cout << "MAN";
        else
            cout << "BOY";
    }

    else {
        if (age >= 19)
            cout << "WOMAN";
        else 
            cout << "GIRL";

    }

    return 0;
}
