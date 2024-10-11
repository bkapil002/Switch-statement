#include<iostream>
using namespace std;

int main(){
    char color;  // Change 'int' to 'char'

    cout << "Enter a letter (R/r, B/b, P/p): ";
    cin >> color;

    switch(color){
        case 'r':
        case 'R':
            cout << "Red" << endl;
            break;

        case 'b':
        case 'B':
            cout << "Blue" << endl;
            break;

        case 'p':
        case 'P':
            cout << "Pink" << endl;
            break;

        default:
            cout << "Invalid input!" << endl;  // Default case for invalid input
            break;
    }

    return 0;
}
