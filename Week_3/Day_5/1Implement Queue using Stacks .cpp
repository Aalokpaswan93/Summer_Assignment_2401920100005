#include <stack>
using namespace std;
class MyQueue {
public:
    stack<int>in;
    stack<int>out;   
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if(out.empty())
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        int top=out.top();
        out.pop();
        return top;
    }
    
    int peek() {
        if(out.empty())   
            while(!in.empty())
            {
                out.push(in.top());
                in.pop();
            }
        return out.top();
    }
    
    bool empty() {
        return (in.empty() && out.empty());
    }
};