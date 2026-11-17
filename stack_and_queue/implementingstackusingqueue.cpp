class MyStack {
public:
    queue<int> s,temp;
    MyStack() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(s.size()-1){
            temp.push(s.front());
            s.pop(); 
        }
        int val=s.front();
        s.pop();
        swap(s,temp);
        return val;
        
    }
    
    int top() {
        while (s.size() > 1) {
            temp.push(s.front());
            s.pop();
        }

        int val = s.front();
        temp.push(val);
        s.pop();

        swap(s, temp);

        return val;
        
    }
    
    bool empty() {
        
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

//  time complexity O(n) for pop and top operations, O(1) for push and empty operations
//  space complexity O(n) where n is the number of elements in the stack

input: ["MyStack","push","push","top","pop","empty"], [[],[1],[2],[],[],[]]
output: [null,null,null,2,2,false]
