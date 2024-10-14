#include<iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter two numbers: ";  // Prompting the user
    cin >> a >> b;                  // Corrected input statement

    if (a % 2 == 0) {
        cout << "Given Number is Even" << endl;
    } else {
        cout << "Given Number is Odd" << endl;
    }

    return 0; // Added return statement
}
