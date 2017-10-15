/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include"unsortedtype.h"
#include<iostream>

template <class ItemType>
UnsortedType<ItemType>::UnsortedType(){
    length=0;
    currentPosition=-1;
    
}
template <class ItemType>
void UnsortedType<ItemType>::makeEmpty()
{
    length=0;
}

template <class ItemType>
bool UnsortedType<ItemType>::isFull()
{
    return (length==MAX_ITEMS);
}

template <class ItemType>
void UnsortedType<ItemType>::lengthIs()
{
    return length;
}

template <class ItemType>
void UnsortedType<ItemType>::insertItem(ItemType item)
{
    data[length]=item;
    length++;
}
template <class ItemType>
void UnsortedType<ItemType>::deleteItem(ItemType item)
{
    int location=0;
    while(item!=data[location])
    {
        location++;
    }
    data[location]=data[length-1];
    length--;
        
}

template <class ItemType>
void UnsortedType<ItemType>::retrieveItem(ItemType&item, bool&found)
{
    int location=0;
    bool moreToSearch=(location<length);
    found=false;
    
    while((moreToSearch)&&(!found))
    {
        if(item==data[location])
        {
            found=true;
            item=data[location];
        }
        else
        {
            location++;
            moreToSearch=(location<length);
        }
    }
    
    
}

template <class ItemType>
void UnsortedType<ItemType>::resetList()
{
    currentPosition=-1;
}

template <class ItemType>
void UnsortedType<ItemType>::getNextItem(ItemType&item)
{
    currentPosition++;
    item=data[currentPosition];
}


