#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

int main() {
    int choice, value, i;
    
    while(1) {
        // Display the menu options
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Switch case to handle the operations
        switch(choice) {
            case 1: // Push
                if(top == MAX - 1) {
                    printf("Stack Overflow! Cannot push more elements.\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                    printf("%d pushed onto the stack.\n", value);
                }
                break;

            case 2: // Pop
                if(top == -1) {
                    printf("Stack Underflow! No elements to pop.\n");
                } else {
                    printf("%d popped from the stack.\n", stack[top--]);
                }
                break;

            case 3: // Display
                if(top == -1) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack elements are: ");
                    for(i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Exit
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
