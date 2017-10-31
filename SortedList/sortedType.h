/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sortedType.h
 * Author: ruhulamin
 *
 * Created on October 24, 2017, 10:01 AM
 */

#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

const int MAX_ITEMS=5;
template<class ItemType>
class SortedType {
    public:
        SortedType();
        void MakeEmpty();
        bool isFull();
        int LengthIS();
        void InsertItem(ItemType);
        void RetriveItem(ItemType&, bool&);
        void DeleteItem(ItemType);
        void ResetList();
        void GetNextItem(ItemType&);
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
            
};

#endif /* SORTEDTYPE_H */

