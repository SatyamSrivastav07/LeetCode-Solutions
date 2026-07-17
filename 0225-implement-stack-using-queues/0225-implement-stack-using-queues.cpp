
class MyStack {
public:
    queue<int> q;
    int topp = -1;

    MyStack() {}

    void push(int x) {
        q.push(x);
        topp = x;
        int size = q.size();
        while (size > 1) {
            int front = q.front();
            q.pop();
            q.push(front);
            size--;
        }
    }

    int pop() {
        int remo = q.front();
        q.pop();
        if (!q.empty()) {
            topp = q.front();
        }
        return remo;
    }

    int top() {
        return topp;
    }

    bool empty() {
        return q.empty();
    }
};