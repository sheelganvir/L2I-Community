
class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue() {}

    void push(int x) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int temp = s1.top();
        s1.pop();
        return temp;
    }

    int peek() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

/*
    TC: The time complexity for the push operation is O(n) because we have to move all elements from s1 to s2 
    before pushing the new element, and then move them back to s1. The pop, peek, and empty operations all have 
    a time complexity of O(1) because they only involve accessing the top element of s1.
    
    SC:  The space complexity is O(n) because we are using two stacks, s1 and s2, to implement the queue. 
    The maximum number of elements stored in the two stacks at any given time is n, where n is the number of elements in the queue.

*/