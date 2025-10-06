#include <iostream>
#define SIZE 5

int arr[SIZE];
int top = -1;

void push(int n) {
    if (top == SIZE - 1) {
        std::cout << "Stack overflow\n";
        return;
    }
    top++;
    arr[top] = n;
}

void pop() {
    if (top == -1) {
        std::cout << "Stack is empty\n";
        return;
    }
    top--;
}

void display() {
    if (top == -1) {
        std::cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--)
        std::cout << arr[i] << std::endl;
}

int main() {
    push(5);
    push(6);
    pop();
    push(2);
    display();
    return 0;
}
