/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quetype.h
 * Author: ruhulamin
 *
 * Created on November 12, 2017, 9:51 AM
 */

#ifndef QUETYPE_H
#define QUETYPE_H

class EmptyQueue{
    
};
class FullQueue{
    
};
template <class ItemType>
class QueType{
    struct NodeType{
        ItemType info;
        NodeType *next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};

#endif /* QUETYPE_H */

