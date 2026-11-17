class MyQueue {
public:
    stack<int> in,out;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    void transfer(){
        while(!in.empty()){
            out.push(in.top());
            in.pop();
        }
    }
    
    int pop() {
        if(out.empty()){
            transfer();
        }
        int val=out.top();
        out.pop();
        return val;
        
    }
    
    int peek() {
        if(out.empty()){
            transfer();
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

//  time complexity O(1) for push, pop, peek and empty operations
//  space complexity O(n) where n is the number of elements in the queue

input: ["MyQueue","push","push","peek","pop","empty"], [[],[1],[2],[],[],[]]
output: [null,null,null,1,1,false]