#include <iostream>

class Stack {
private:
    static const int CAPACITY = 128;
    int data[CAPACITY];
    int topIndex;

public:
    Stack() : topIndex(-1) {}

    void push(int value) {
        if (topIndex >= CAPACITY - 1)
            return;
        data[++topIndex] = value;
    }

    void pop() {
        if (isEmpty())
            return;
        topIndex--;
    }

    int peek() {
        if (isEmpty())
            return -1;
        return (data[topIndex]);
    }

    int size() {
        return (topIndex + 1);
    }

    void print() {
        for (int i = 0; i <= topIndex; ++i)
            std::cout << data[i] << ' ';
        std::cout << '\n';
    }

private:
    bool isFull() {
        if (topIndex >= CAPACITY - 1)
            return false;
        return true;
    }

    bool isEmpty() {
        return (topIndex == -1);
    }
};

int main() {
    Stack container;

    container.push(1);
    container.push(3);
    container.push(5);
    container.push(7);
    container.print();

    std::cout << "top = " << container.peek() << '\n';
    std::cout << "size = " << container.size() << '\n';

    container.pop();
    container.pop();
    container.print();

    std::cout << "top = " << container.peek() << '\n';
    std::cout << "size = " << container.size() << '\n';
    return 0;
}