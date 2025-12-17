#include <iostream>
using namespace std;

class stack(){
    int top;
    int arr[30];

    stack() {
        top = -1;
    }
    
        int push(int x) {
    if (top == (size-1)) {
        return -1;
    }
    else{
        arr[++top] = x;
    }

    int pop() {
        if (top == -1) {
            return -1;
        }
        else {
            delete arr[top];
            top--;
        }
    }

    int peek() {
        if (top == -1) {
            return -1
        }
        else {
            return arr[top]
        }
    }

    int precedence(char op){
        if(op == '+'|| op == '-'){
            return 1;
        }
        if(op == '*'|| op == '/'){
            return 2;
        }
        return 0;
    }

    string infixtopostfix(string expression){
        stack s;
        string postfix = "";

        for (int i = 0; i < expression.length(); i++)
        {
            char c = expression[i];

            if (c == " "){
                continue;
            }

            if(isdigit(c)){
                postfix += c;
                postfix += " ";
            }
            else if(c == "("){
                s.push(c);
            }
            else if(c == ")"){
                while (!s.isEmpty() && s.peek() != "(")
                {
                    postfix += (char)s.pop();
                    postfix += " ";
                }

                if (!s.isEmpty())
                {
                    s.pop();
                }

                
                
            }

            else{
                while (!s.isEmpty() && precedence(s.peek()) >= precedence(c))
                {
                    postfix += (char)s.pop();
                    postfix += " ";
                }
                s.push(c);

            }        
        }

        while (!s.isEmpty())
        {
            postfix += (char)s.pop();
            postfix += " ";
        }
        return postfix;
        
    }
    

    int evaluatePostfix(string postfix){
        stack s;
        for (int i = 0; i < postfix.length(); i++)
        {
            char c = postfix[i];

            if (c == " "){
                continue;
            }

            if (isdigit(c)){
                s.push(c - '0');
            }
            else{
                int val2 = s.pop();
                int val1 = s.pop();

                switch (c)
                {
                case '+':
                    s.push(val1 + val2);
                    break;
                
                case '-':
                    s.push(val1 - val2);
                    break;

                case '*':
                    s.push(val1 * val2);
                    break;

                case '/':
                    s.push(val1 / val2);
                    break;
                }
            }
        }
        return s.pop();
    }
    
int main() {
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);
    string postfix = infixtopostfix(infix);

    if(postfix != ""){
        cout << "Postfix expression: " << postfix << endl;
        int result = evaluatePostfix(postfix);
        cout << "Result: " << result << endl;
    }
    else{
        cout << "Error in converting infix to postfix." << endl;
}

}


