/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on November 12, 2017, 9:51 AM
 */

#include <iostream>
#include"quetype.cpp"

using namespace std;

/*
 * 
 */
int main() {
    
    QueType<int> que;
    if(que.IsEmpty())
        cout<<"Queue Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;
    
    que.Enqueue(5);
    que.Enqueue(7);
    que.Enqueue(4);
    que.Enqueue(2);
    
    if(que.IsEmpty())
        cout<<"Queue Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;
    
    if(que.IsFull())
        cout<<"Queue FUll"<<endl;
    else
        cout<<"Queue is not  FUll"<<endl;
    
    que.Enqueue(6);
    /*
    ItemType x=0;
    int y=0;
    
    QueType<int>tempQue;
    while(!que.IsEmpty()){
        que.Dequeue(ItemType & x);
        //cout<<que.Dequeue(x)<<endl;
        cout<<"done!<<endl;
    }
   */
    
    
}