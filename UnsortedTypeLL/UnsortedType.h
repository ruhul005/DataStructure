/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UnsortedType.h
 * Author: ruhulamin
 *
 * Created on October 22, 2017, 9:59 AM
 */

#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

template <class ItemType>
class UnsortedType {
    struct NodeType{
        ItemType info;
        NodeType *next;
    };
    public:
        UnsortedType();
        ~UnsortedType();
        bool isFull();
        int LengthIs();
        void MakeEmpty();
        void RetriveItem(ItemType&,bool&);
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void Reset();
        void GetNextItem(ItemType&);
    private:
        NodeType *listData;
        int length;
        NodeType* currentPos;
            
        

};

#endif /* UNSORTEDTYPE_H */

