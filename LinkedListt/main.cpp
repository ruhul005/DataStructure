/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on October 18, 2017, 9:19 PM
 */

#include <iostream>
#include"LinkedListt.h"

using namespace std;

/*
 * 
 */
int main() {

    LinkedListt l;
    l.InsertAtFront(2);
    l.InsertAtFront(1);
    l.InsertAtFront(6);
  // l.InsertAtBack(7);
  // l.InsertAtFront(1);
  // l.InsertAtBack(10);
   l.InsertAtPosition(9,2);
    l.PrintList();
    l.Search(1);
    
    
    if(l.Search(0))
        cout<<"found"<<endl;
                
    else
        cout<<"Not Found"<<endl;
    
   // l.DeleteFromFront();
    //l.DeleteFromBack();
    l.DeleteFromPosition(2);
    l.PrintList();
    
}

