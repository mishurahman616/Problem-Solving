#include<iostream>
#include<vector>

class Stack{
private:
    int maxSize;
    std::vector<int> v;
    int top;
public:
    Stack(int size){
        maxSize=size;
        top =-1;
    }
    void push(int j){
        if(v.size()<maxSize){
            v[top++]=j;
        }else{
            std::cout << "Stack is full" <<std::endl;
        }
    }
    int pop(){
        if(v.size()>0){
            return v[top--];
        }else{
            std::cout << "Stack is empty" << std::endl;
        }
    }
};

int main(){
    int n;
    std::cin >>n;
    std::cout <<n;
    Stack s(5);
    s.push(10);
    s.push(23);
    std::cout << s.pop();
}
