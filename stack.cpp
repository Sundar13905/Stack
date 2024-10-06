#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

int main() {
    int choice, value;

    while (true) {
        // Display the menu options
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Switch case to handle the operations
        switch (choice) {
            case 1: // Push
                if (top == MAX - 1) {
                    cout << "Stack Overflow! Cannot push more elements." << endl;
                } else {
                    cout << "Enter the value to push: ";
                    cin >> value;
                    stack[++top] = value;
                    cout << value << " pushed onto the stack." << endl;
                }
                break;

            case 2: // Pop
                if (top == -1) {
                    cout << "Stack Underflow! No elements to pop." << endl;
                } else {
                    cout << stack[top--] << " popped from the stack." << endl;
               
