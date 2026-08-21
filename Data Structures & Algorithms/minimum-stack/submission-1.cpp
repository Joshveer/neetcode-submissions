class MinStack {
private:
    stack<int> s;
    stack<int> ms;
public:
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        if (!ms.empty()) {
            val = min(val, ms.top());
        }
        ms.push(val);
    }
    
    void pop() {
        s.pop();
        ms.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ms.top();
    }
};
