#include <iostream>
using namespace std;
int main() {
    string first_num, mathematical_operation, second_num;
    int count;
    while (true) {
        cout << "welcome to your C++ calculator!!" << endl;
        cout << "====================" << endl;
        cout << "enter a number: ";
        getline(cin, first_num);
        count ++;
        cout << "enter an operation (+, -, x, / and q or quit to stop the calculator): ";
        getline(cin, mathematical_operation);
        if (mathematical_operation == "q" or mathematical_operation == "quit") {
            count > 1 ? cout << "You used the calculator " << count << " times" << endl : cout << "you used the calculator once" << endl;
            /* this evaluates to if count is greater than 1 it would perform what so ever is after the question mark, else it'll perform what's after the colon */
            break;
        }
        cout << "enter another number: ";
        getline(cin, second_num);
        try {
            if (mathematical_operation == "+") {
                cout << "Result: " << stoi(first_num) + stoi(second_num) << endl;
            }
            else if (mathematical_operation == "-") {
                cout << "Result: " << stoi(first_num) - stoi(second_num) << endl;
            }
            else if (mathematical_operation == "x" or mathematical_operation == "*") {
                cout << "Result: " << stoi(first_num) * stoi(second_num) << endl;
            }
            else if (mathematical_operation == "/") {
                cout << "Result: " << stoi(first_num) / stoi(second_num) << endl;
            }
            else {
                cout << "invalid operation given" << endl;
            }
            cout << endl;
        }
        catch(const exception& e) {
            cout << "An error occoured" << endl;
            cout << endl;
        }
    }
}