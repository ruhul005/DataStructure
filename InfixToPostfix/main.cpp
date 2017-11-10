

/*
 * Assignment 1 part-1
 * File:   main.cpp
 * Name:Md. Ruhul Amin
 * ID:1512487042
 *
 * Created on November 1, 2017, 7:20 PM
 */

#include <cstdlib>
#include<iostream>
#include<string.h>

#include "infixToPostfix.cpp"

using namespace std;

string convertInfixToPostfix(string infix);
int evaluatePostfixExpression(string postfix);


 
int main() { 
    
    string infixExpression, postfixExpression;
    int result;

    infixExpression = "(4+8)*(6-5)/((3-2)*(2+2))"; 
    
    postfixExpression = convertInfixToPostfix(infixExpression);

    cout<<infixExpression<<endl;
    cout<<"Postfix Expression: "<<postfixExpression<<endl;
    
    result = evaluatePostfixExpression(postfixExpression);

    cout<<"\nResult is: "<<result<<endl;

    return 0;
    
}


//INFIX to POSTFIX conversion
string convertInfixToPostfix(string infix)
{
    string postfix = "";
    infixToPostfix <char> myStack;
    char ch;

    for(int i=0; infix[i]; i++)
    {
        ch = infix[i];

        if(ch=='(') //if found opening bracket
            myStack.push(ch);
        else if(ch==')') //if found closing bracket
        {
            while(!myStack.empty() && myStack.Top()!='(')
            {
                postfix = postfix + myStack.Top();
                myStack.pop();
            }

            if(!myStack.empty() && myStack.Top()=='(')
               myStack.pop();

        }
        else //found operator or operand
        {
            int priority = myStack.operatorPrecedence(ch); //* and /. then + and -

            if(priority==0) //found operand
                postfix = postfix + ch;
            else //found operator
            {
                if(myStack.empty())
                    myStack.push(ch);
                else
                {
                    while(!myStack.empty()
                          && myStack.Top()!='('
                            && priority<=myStack.operatorPrecedence(myStack.Top()))
                    {
                        postfix = postfix + myStack.Top();
                        myStack.pop();
                    }
                    myStack.push(ch);
                }

            }
        }
    }

    while(!myStack.empty())
    {
        postfix += myStack.Top();
        myStack.pop();
    }

    return postfix;
}

int evaluatePostfixExpression(string postfix)
{
    infixToPostfix <int> myStack;
    char ch;
    
    for(int i=0; postfix[i]; i++)
    {
        ch = postfix[i];
        if(ch>='0' && ch<='9') //found operand
            myStack.push(ch-'0'); //char to int conversion
        else //found operator
        {
            int a,b;
            b = myStack.Top();
            myStack.pop();

            a = myStack.Top();
            myStack.pop();

            myStack.push(myStack.calculate(a, b, ch));
        }
    }

    return myStack.Top();
}