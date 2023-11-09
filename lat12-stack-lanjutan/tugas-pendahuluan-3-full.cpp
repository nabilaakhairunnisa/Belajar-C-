#include <iostream>
#define SIZE 5
using namespace std;
class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }
    bool isFull() {
        return top == SIZE - 1;
    }
};

int main() {
    Stack stack;
    if (stack.isFull()) {
        cout << "Stack is full.";
    } else {
        cout << "Stack is not full.";
    }
    return 0;
}

