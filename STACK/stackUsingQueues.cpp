MyStack() {
        
    }
    void push(int x) {
            q.push(x);
            for(int i=0;i<q.size()-1;i++){
                q.push(q.front());
                q.pop();
            }
        
    }
    
    int pop() {
        if(q.empty()) return -1;
        else{
            int x = q.front();
            q.pop();
            return x;
        }
        
    }
    
    int top() {
        if(q.empty()) return -1;
       else return q.front(); 
    }
    
    bool empty() {
        if(q.empty()) return 1;
        else return 0;
    }
};
