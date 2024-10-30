#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Узел для стека
struct NodeS {
    string value; 
    NodeS* next;
};

// Структура стека
struct Stack {
    NodeS* top; 

    Stack() {
        top = nullptr;
    }

    void push(const string& value) {
        NodeS* newNodeSt = new NodeS();
        newNodeSt->value = value;
        newNodeSt->next = top;  
        top = newNodeSt; 
    }

    string pop() {
        if (top == nullptr) {
            cout << "Стек пуст, нечего удалять." << endl;
            return ""; // Возвращаем пустую строку, если стек пуст
        }

        NodeS* temp = top;
        top = top->next; 
        string value = temp->value; 
        delete temp;  
        return value; 
    }


    // Получение значения верхнего элемента
    string topElem() {
        if (top == nullptr) {
            return ""; // Возвращаем пустую строку, если стек пуст
        }
        return top->value; // Возвращаем значение верхнего элемента
    }


    // Проверка, пуст ли стек
    bool isEmpty() {
        return top == nullptr;
    }
};


int priority(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}


bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}


string infixToPostfix(const string& infix) {
    Stack operators;
    string postfix;


    for (char c : infix) {
        if (isspace(c)) {
            continue; // Игнорируем пробелы
        }
        if (isalnum(c)) {
            postfix += c; // Если это операнд, добавляем его в постфикс
        } else if (c == '(') {
            operators.push(string(1, c)); // Если это открывающая скобка, помещаем в стек
        } else if (c == ')') {
            while (!operators.isEmpty() && operators.topElem() != "(") { // из стека извлекаются элементы и добавляются к постфиксу, пока
                postfix += operators.pop(); // не будет найдена открыв скобка
            }
            operators.pop(); // Удаляем открывающую скобку
        } else if (isOperator(c)) { // если оператор
            while (!operators.isEmpty() && priority(operators.topElem()[0]) >= priority(c)) {
                postfix += operators.pop();
            }
            operators.push(string(1, c)); // Добавляем текущий оператор в стек
        }
    }


    // Добавляем оставшиеся операторы в постфикс
    while (!operators.isEmpty()) {
        postfix += operators.pop();
    }

    return postfix;
}


int main() {
    string infix;
    cout << "Enter infix : ";
    getline(cin, infix);


    string postfix = infixToPostfix(infix);
    cout << "Postfix : " << postfix << endl;


    return 0;
}