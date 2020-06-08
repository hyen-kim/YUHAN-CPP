#include <iostream>
using namespace std;

class MyStack_int {
    int tos;    // top of stack
    int data[100];
public:
    MyStack_int();
    void push(int element);
    int pop();
};

MyStack_int::MyStack_int() {
    tos = -1;
}

void MyStack_int::push(int element) {
    if (tos == 99) {
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}

int MyStack_int::pop() {
    int retData;
    if (tos == -1) {
        cout << "stack empty"; 
        return 0;
    }
    retData = data[tos--];
    return retData;
}

class MyStack_double {
    int tos;
    double data[100];
public:
    MyStack_double();
    void push(double element);
    double pop();
};

MyStack_double::MyStack_double() {
    tos = -1;
}

void MyStack_double::push(double element) {
    if (tos == 99) {
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}

double MyStack_double::pop() {
    double retData;
    if (tos == -1) {
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

class MyStack_char {
    int tos;
    char data[100];
public:
    MyStack_char();
    void push(char element);
    char pop();
};

MyStack_char::MyStack_char() {
    tos = -1;
}

void MyStack_char::push(char element) {
    if (tos == 99) {
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}

char MyStack_char::pop() {
    char retData;
    if (tos == -1) {
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

class MyStack_string {
    int tos;
    string data[100];
public:
    MyStack_string();
    void push(string element);
    string pop();
};

MyStack_string::MyStack_string() {
    tos = -1;
}

void MyStack_string::push(string element) {
    if (tos == 99) {
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
}

string MyStack_string::pop() {
    string retData;
    if (tos == -1) {
        cout << "stack empty";
        return 0;
    }
    retData = data[tos--];
    return retData;
}

int main()
{
    MyStack_int iStack;         // int 만 저장하는 스택
    iStack.push(3);
    cout << iStack.pop() << endl;

    MyStack_double dStack;      // double 만 저장하는 스택
    dStack.push(3.5);  
    cout << dStack.pop() << endl;

    MyStack_char* pc = new MyStack_char();     // char만 저장하는 스택
    pc->push('a');
    cout << pc->pop() << endl;
    delete pc;

    MyStack_string* ps = new MyStack_string();  // string만 저장하는 스택
    ps->push("abc");
    cout << ps->pop() << endl;
    delete ps;


    system("pause");
}

