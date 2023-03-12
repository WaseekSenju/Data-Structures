Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
in O(1),




class MinStack {
public:

// create two stacks 
    std::stack<int>stack;
    std::stack<int>minStack;

    void push(int val) {
        // keep track of lowest element in another stack 
        if(stack.empty())
        {
            stack.push(val);
            minStack.push(val);    
        }else{
            if(val<minStack.top()){
                minStack.push(val);
            }else{
                minStack.push(minStack.top());
            }
            stack.push(val);
        }


    }
    
    void pop() {
        if(!stack.empty()){
        stack.pop();
        minStack.pop();
        }

    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */