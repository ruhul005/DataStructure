/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on November 26, 2017, 9:44 AM
 */

#include <iostream>
#include"binarysearchtree.cpp"
using namespace std;

/*
 * 
 */
int main() {
    TreeType <int> myTree;
    cout<<"An Empty tree has been created"<<endl;
    
    
    if(myTree.IsEmpty())
        cout<<"Tree empty"<<endl;
    
    cout<<"Iserting 10 items"<<endl;
    
    myTree.InsertItem(4);
    myTree.InsertItem(9);
    myTree.InsertItem(2);
    myTree.InsertItem(7);
    myTree.InsertItem(3);
    myTree.InsertItem(11);
    myTree.InsertItem(17);
    myTree.InsertItem(0);
    myTree.InsertItem(5);
    myTree.InsertItem(1);
    
    if(myTree.IsEmpty())
        cout<<"Tree Empty"<<endl;
    else
        cout<<"Tree is not empty"<<endl;
    
    int getLength=myTree.LengthIs();
    cout<<"Length is:"<<getLength<<endl;
    
    int retrive=9;
    bool get;
    
    myTree.RetriveItem(retrive,get);
    
    if(get)
        cout<<"Item Found"<<endl;
    else
        cout<<"Not found"<<endl;
        
    retrive=13;
    myTree.RetriveItem(retrive,get);
    
    if(get)
        cout<<"Item Found"<<endl;
    else
        cout<<"Not found"<<endl;
    
    
    int x;
    OrderType order=IN_ORDER;
    bool finished=false;
    
    myTree.ResetTree(order);
    while(!finished){
        myTree.GetNextItem(x,order,finished);
        cout<<x<<" ";
    }
    
    
        
    
    
}

