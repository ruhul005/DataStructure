

/* 
 * File:   infixToPostfix.h
 * Author: ruhulamin
 *
 * Created on November 1, 2017, 7:21 PM
 */

#ifndef INFIXTOPOSTFIX_H
#define INFIXTOPOSTFIX_H
const int MAX_ITEMS=100;

class EmptyStack{
    
};

template <class ItemType>
class infixToPostfix {
public:
    infixToPostfix();
    void pop();
    void push(ItemType);
    //bool IsFull();
    bool empty();
    ItemType Top();
    int operatorPrecedence(char ch);
    int calculate(int a, int b, char operatorSign);
    
    
    private:
        private:
    int top;
    ItemType items[MAX_ITEMS];

};

#endif /* INFIXTOPOSTFIX_H */

