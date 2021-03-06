//
//  main.cpp
//  Stack
//
//  Created by RI on 18.02.16.
//  Copyright © 2016 RI. All rights reserved.
//

#include <iostream>
#include <assert.h>


class CStack {
private:
    int data[100];
    int size;
public:
    CStack();
    ~CStack();
    int push(int val);
    int pop();
    int dump();
};

CStack::CStack():
data(), // I think because it's a list better to place it as a list 
size(0) {
    std::cout<<"Stack had been created"<< std::endl;
}

CStack::~CStack() {
    //std::cout << "Stack has been deleted" << std::endl;
    this->size = -1; // adding this->
}

int CStack::push(int val) {
    if (this->size >= 0 & this->size < 100) { // you need to check overflow!!
        this->data[this->size++] = val;
    } else {
        std::cout << "Invalid stack pointer" << std::endl;
        assert(-1);
    }
    return 0;
}

int CStack::pop() {
    if (this->size > 0) {
        return this->data[--this->size];
    } else {
        std::cout << "Invalid stack pointer" << std::endl;
        assert(-1);
    }
    return 0;
}

int CStack::dump() {
    std::cout << "Current stack with size " << this->size << " is: ";
    for (int size_ = 0; size_<this->size; size_++) {
        std::cout << this->data[size_] << " ";
    }
    std::cout << std::endl ;
    return 0;
}


int main() {
    CStack stack;
    stack.push(10);
    stack.push(15);
    stack.dump();
    stack.pop();
    stack.dump();
    return 0;
}
