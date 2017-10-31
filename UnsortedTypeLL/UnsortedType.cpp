/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UnsortedType.cpp
 * Author: ruhulamin
 * 
 * Created on October 22, 2017, 9:59 AM
 */

#include "UnsortedType.h"
#include<iostream>
using namespace std;

template<class ItemType>
UnsortedType<ItemType>::UnsortedType(){
    
    length=0;
    listData=NULL;
    currentPos=NULL;
    
}
template<class ItemType>
int UnsortedType<ItemType>::LengthIs(){
    
    return length;
}

template<class ItemType>
bool UnsortedType<ItemType>::isFull(){
    NodeType *location;
    try{
        location =new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        
        return true;
    }
}

template<class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){
    
    NodeType* location;
    location = new NodeType;
    location->info=item;
    location->next=listData;
    listData=location;
    length++;
}

template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
    
    NodeType *location=listData;
    NodeType *tempLocation;
    if(item==listData->info){
        tempLocation=location;
        listData==listData->next;
    }
    else{
        while(!(item==(location->next)->info))
            location=location->next;
        tempLocation=location->next;
        location->next=(location->next)->next;
    }
    delete tempLocation;
    length--;
}

template<class ItemType>
void UnsortedType<ItemType>::RetriveItem(ItemType& item, bool& found){
    
    NodeType* location= listData;
    bool moreToSearch= (location!=NULL);
    found=false;
    while(moreToSearch && !found){
        if(item==location->info)
            found=true;
        else{
            location=location->next;
            moreToSearch=(location!=NULL);
        }
    }
}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    
    NodeType *tempPtr;
    while(listData!=NULL){
        tempPtr=listData;
        listData=listData->next;
        delete tempPtr;
    }
    length=0;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
    MakeEmpty();
}

template <class ItemType>
void UnsortedType<ItemType>::Reset()
{
    currentPos=NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item){
    
    if(currentPos==NULL)
        currentPos=listData;
    else
        currentPos=currentPos->next;
    
    item=currentPos->info;
}