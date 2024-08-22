#include <iostream>
#include <stack>

class QueueUsingStacks {
private:
    std::stack<int> stack1, stack2;

public:
    // Enqueue operation (costly)
    void enqueue(int x) {
        // Step 1: Move all elements from stack1 to stack2
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }

        // Step 2: Push the new element into stack1
        stack1.push(x);

        // Step 3: Move all elements back from stack2 to stack1
        while (!stack2.empty()) {
            stack1.push(stack2.top());
            stack2.pop();
        }
    }

    // Dequeue operation (efficient)
    int dequeue() {
        if (stack1.empty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1; // Return an error value
        }

        // The top of stack1 is the front of the queue
        int x = stack1.top();
        stack1.pop();
        return x;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return stack1.empty();
    }

    // Get the front element of the queue
    int front() {
        if (stack1.empty()) {
            std::cout << "Queue is empty!" << std::endl;
            return -1; // Return an error value
        }
        return stack1.top();
    }
};

int main() {
    QueueUsingStacks q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << "Front element: " << q.front() << std::endl; // Output: 1
    std::cout << "Dequeued: " << q.dequeue() << std::endl;    // Output: 1
    std::cout << "Dequeued: " << q.dequeue() << std::endl;    // Output: 2

    q.enqueue(4);

    std::cout << "Front element: " << q.front() << std::endl; // Output: 3
    std::cout << "Dequeued: " << q.dequeue() << std::endl;    // Output: 3
    std::cout << "Dequeued: " << q.dequeue() << std::endl;    // Output: 4

    if (q.isEmpty()) {
        std::cout << "Queue is empty now!" << std::endl; // Output: Queue is empty now!
    }

    return 0;
}
