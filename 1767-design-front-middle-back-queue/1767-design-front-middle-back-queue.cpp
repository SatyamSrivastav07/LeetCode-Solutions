class FrontMiddleBackQueue {
public:
    deque<int> dq;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        dq.push_front(val);
    }
    
    void pushMiddle(int val) {
        int mid = dq.size() / 2;
        dq.insert(dq.begin() + mid, val);
    }
    
    void pushBack(int val) {
        dq.push_back(val);
    }
    
    int popFront() {
        if ( dq.empty()) return -1;
        int val = dq.front();
        dq.pop_front();
        return val;
    }
    
    int popMiddle() {
        if (dq.empty()) return -1;

        int mid = (dq.size() - 1) / 2;
        int val = dq[mid];

        dq.erase(dq.begin() + mid);

        return val;
    }
    
    int popBack() {
        if ( dq.empty()) return -1;
        int val = dq.back();
        dq.pop_back();
        return val;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */