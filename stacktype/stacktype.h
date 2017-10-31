/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stacktype.h
 * Author: ruhulamin
 *
 * Created on October 31, 2017, 9:54 AM
 */

#ifndef STACKTYPE_H
#define STACKTYPE_H

const int MAX_ITEMS=5;
class FullStack{
    
    
};

class EmptyStack{
    
};

template <class ItemType>
class StackType{
public:
    StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
private:
    int top;
    ItemType items[MAX_ITEMS];
};

#endif /* STACKTYPE_H */

