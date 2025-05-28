#include<iostream>
#include<vector>
using namespace std;
class stack
{
    private:
    vector<int>vec;
    public:
    void push(int val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        vec.pop_back();
    }
    int top()
    {
        return vec[vec.size()-1];
    }
    bool empty()
    {
        return vec.size()==0;
    }
    
};
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
    s.pop();
    }
    
    cout<<endl;
    cout<<s.empty()<<endl;
    
    return 0;
}