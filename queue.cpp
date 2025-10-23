#include <iostream>
#include <queue> // Include the queue header

int main() {
    // Declare a queue of integers
    std::queue<int> myQueue;

    // Enqueue elements (add to the back)
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Access the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Access the back element
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    // Get the size of the queue
    std::cout << "Queue size: " << myQueue.size() << std::endl;

    // Dequeue elements (remove from the front)
    myQueue.pop(); // Removes 10
    std::cout << "Front element after pop: " << myQueue.front() << std::endl;

    myQueue.pop(); // Removes 20
    std::cout << "Front element after second pop: " << myQueue.front() << std::endl;

    myQueue.pop(); // Removes 30

    // Check if empty after all pops
    if (myQueue.empty()) {
        std::cout << "Queue is empty after all elements are dequeued." << std::endl;
    }

    return 0;
}
