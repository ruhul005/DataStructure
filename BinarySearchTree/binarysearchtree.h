/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   binarysearchtree.h
 * Author: ruhulamin
 *
 * Created on November 26, 2017, 9:45 AM
 */

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include"quetype.cpp"
template <class ItemType>
struct TreeNode{
    ItemType info;
    TreeNode *left;
    TreeNode *right;
    
};
enum OrderType{PRE_ORDER, IN_ORDER, POST_ORDER};
template <class ItemType>
class TreeType{
    public:
        TreeType();
        ~TreeType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        int LengthIs();
        void RetriveItem(ItemType& item,bool& found);
        void InsertItem(ItemType item);
        void DeleteItem(ItemType item);
        void ResetTree(OrderType order);
        void GetNextItem(ItemType& item,OrderType order,bool& finished);
        void Print();
        private:
            TreeNode<ItemType>* root;
            QueType<ItemType> preQue;
            QueType<ItemType> inQue;
            QueType<ItemType> postQue;
            
        

};

#endif /* BINARYSEARCHTREE_H */

