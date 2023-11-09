#include <iostream>
#define SIZE 10
using namespace std;
class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }
	bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack stack;
    if (stack.isEmpty()) {
        cout<<"Stack is empty.";
    } else {
        cout<<"Stack is not empty.";
    }
    return 0;
}

