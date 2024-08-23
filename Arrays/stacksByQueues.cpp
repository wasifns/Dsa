#include <iostream>
#include <queue>
using namespace std;

class StackUsingQueues {
private:
    queue<int> queue1, queue2;

public:
    void push(int x) {
        // Push the new element into queue2
        queue2.push(x);

        // Move all elements from queue1 to queue2
        while (!queue1.empty()) {
            queue2.push(queue1.front());
            queue1.pop();
        }

        // Swap the queues
        swap(queue1, queue2);
    }

    void pop() {
        if (queue1.empty()) {
            cout << "Stack is empty, cannot pop.\n";
            return;
        }
        queue1.pop();
    }

    int top() {
        if (queue1.empty()) {
            cout << "Stack is empty.\n";
            return -1;  // Return an invalid value to indicate the stack is empty
        }
        return queue1.front();
    }

    bool empty() {
        return queue1.empty();
    }
};

int main() {
    StackUsingQueues stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top element: " << stack.top() << endl;  // Output: 3
    stack.pop();

    cout << "Top element after pop: " << stack.top() << endl;  // Output: 2
    stack.pop();

    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl;  // Output: No
    stack.pop();

    cout << "Is stack empty after popping all elements? " << (stack.empty() ? "Yes" : "No") << endl;  // Output: Yes

    return 0;
}
