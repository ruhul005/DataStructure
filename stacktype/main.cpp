/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on October 31, 2017, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
#include"stacktype.cpp"

using namespace std;

/*
 * 
 */
/*
int sumOdd(StackType <int>s){
    int sum=0;
    if(s%2==0)
        sum=sum+s;
    return sum;
}
*/
int main() {

    StackType<int> stack;
    
    if(stack.IsEmpty()){
        cout<<"Empty Stack"<<endl;
    }
    
    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);
    
    cout<<"PUSHED four ITEMS"<<endl;
    if(stack.IsEmpty()){
        cout<<"Empty Stack"<<endl;
    }
    if(stack.IsFull())
    {
        cout<<"Stack full"<<endl;
    }
    
    StackType<int> tempStack;
    
    int x=0;
    while(!stack.IsEmpty()){
        x=stack.Top();
        tempStack.Push(x);
        stack.Pop();
        cout<<x<<endl;
          
    }
    cout<<"Printed values from stack"<<endl;
    
    x=0;
    while(!tempStack.IsEmpty()){
        x=tempStack.Top();
        stack.Push(x);
        tempStack.Pop();
    }
    stack.Push(3);
    cout<<"Printing after pushing 3"<<endl;
     x=0;
    while(!stack.IsEmpty()){
        x=stack.Top();
        tempStack.Push(x);
        stack.Pop();
        cout<<x<<endl;
          
    }
     
     if(tempStack.IsFull()){
         cout<<"Stack Full"<<endl;
     }
     
     
     tempStack.Pop();
     tempStack.Pop();
     
     cout<<tempStack.Top()<<endl;
     
     x=0;
     
     //x=sumOdd(tempStack);
    
}

