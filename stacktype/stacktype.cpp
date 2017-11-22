/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stacktype.cpp
 * Author: ruhulamin
 * 
 * Created on October 31, 2017, 9:54 AM
 */

#include "stacktype.h"
template <class ItemType>
StackType<ItemType>::StackType(){
    top=-1;   
}
template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (top==-1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    return(top==MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if( IsFull() ) throw FullStack();
    top++;
    items[top]=newItem;
}
template <class ItemType>
void StackType<ItemType>::Pop(){
    if(IsEmpty()) throw EmptyStack();
    top--;
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if(IsEmpty()) throw EmptyStack();
    return items[top];
}


