class MinStack {
public:
    /** initialize your data structure here. */
    int m;
    stack<int> s1;
    stack<int>s2;
    int minn(int a, int b){
        return a<b?a:b;
    }
    MinStack() {
        m = INT_MAX;
    }
    
    void push(int x) {
        if(s1.empty()){
            m = x;
        }else{
            m = minn(x, s2.top());
        }
        s1.push(x);
        
        //m = minn(x, m);
        s2.push(m);
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int min() {
        return s2.top();
    }
};