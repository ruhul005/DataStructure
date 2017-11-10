/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   infixToPostfix.cpp
 * Author: ruhulamin
 * 
 * Created on November 1, 2017, 7:21 PM
 */
#include<iostream>
#include "infixToPostfix.h"

using namespace std;

template <class ItemType>
infixToPostfix<ItemType>::infixToPostfix(){
    top=-1;
}


template <class ItemType>
bool infixToPostfix<ItemType>::empty(){
    return (top==-1);
}

template <class ItemType>
void infixToPostfix<ItemType>::pop(){
    top--;
}


template <class ItemType>
void infixToPostfix<ItemType>::push(ItemType newItem){
    
    top++;
    //}
    items[top]=newItem;
}
template <class ItemType>
ItemType infixToPostfix<ItemType>::Top(){
    
    if(empty()) throw EmptyStack();
    //cout<<"reached TOP";
    return items[top];

}

template <class ItemType>
int infixToPostfix<ItemType>:: operatorPrecedence(char ch)
{
    
    if(ch=='/' || ch=='*')
        return 2; //high priority than + or - operator
    else if(ch=='+' || ch=='-')
        return 1; //lowest priority among operators
    else
        return 0; //works for operands

}

// Calculation, according to arithmetic operator sign
template <class ItemType>

int  infixToPostfix<ItemType>::calculate(int a, int b, char operatorSign)
{
    if(operatorSign=='+')
        return a+b;
    else if(operatorSign=='-')
        return a-b;
   else if(operatorSign=='*')
        return a*b;
   else if(operatorSign=='/')
        return a/b;
     

}
