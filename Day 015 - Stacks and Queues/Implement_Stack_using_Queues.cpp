#include <queue>

class MyStack {
private:
    std::queue<int> q;

public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

/*
    TC: The time complexity of the push operation is O(n) because we are iterating through the queue 
        to rearrange the elements after each push. The time complexity of the pop, top, 
        and empty operations is O(1) because they only involve accessing the front element of the queue. 
        
    SC: The space complexity is O(n) where n is the number of elements in the stack, 
        as we are using a queue to implement the stack.
*/