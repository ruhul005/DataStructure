/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedListt.cpp
 * Author: ruhulamin
 * 
 * Created on October 18, 2017, 9:21 PM
 */

#include "LinkedListt.h"
#include<iostream>//Must declare this; this will affect on NULL
#include<cstddef>

using namespace std;


struct Node{
    int data;
    Node* next;
};

Node *head = NULL;

void LinkedListt::InsertAtFront(int item)
{
    if(head==NULL)
    {
        head = new Node();
        head->data=item;
        head->next=NULL;
    }
    else
    {
        Node* temp=new Node();
        temp->data=item;
        temp->next=head;
        head=temp;
        
    }
    
};
void LinkedListt::PrintList()
    {
        Node *temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
        
        
    };
   /* void LinkedListt::InsertAtBack(int item){
        
        Node *temp=new Node();
        temp->data=item;
        temp->next=NULL;
        
        Node *temp2=head;
        
        
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;
    }
    * */
    
     void LinkedListt::InsertAtBack(int item){
     Node *temp = new Node();
     temp->data = item;
     temp->next = NULL;

     Node *temp2 = head;
     while(temp2->next!= NULL){
        temp2 = temp2->next;
     }
     temp2->next = temp;
};

void LinkedListt::InsertAtPosition(int item ,int position){
  
    Node *temp1=new Node();
    temp1->data=item;
    temp1->next=NULL;
    
    if(position==1)
    {
        temp1->next=head;
        head=temp1;
    }
    Node*temp2=head;
    
    int i=0;
    while(i<position-2)
    {
        temp1=temp2->next;
        
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    
};

bool LinkedListt::Search(int Key)
{
  bool flag=false;
  Node *temp=head;
  while(temp->next!=NULL)
  {
      if(temp->data==Key)
      {
          flag=true;
      }
      temp=temp->next;
  }
  if(temp->data==Key)
      flag=true;
  return flag;
  
  
};

void LinkedListt::DeleteFromFront(){
    if(head==NULL)
        cout<<"nothing to delete"<<endl;
    else{
        Node *temp=head->next;
        delete head;
        head=temp;
    }
};
void LinkedListt::DeleteFromBack(){
    if(head==NULL)
        cout<<"Nothing to delete"<<endl;
    
    Node *temp=head;
    Node *temp2=head;
    int n=0;
    while(temp->next!=NULL){
        temp=temp->next;
        
        n++;
       // cout<<"While loop"<<endl;
        if(n>1)
        {
            temp2=temp2->next;
            //cout<<"in if"<<endl;
        }
    }
    if(temp->next==NULL){
        delete temp;
        temp2->next=NULL;
       // cout<<"deleted"<<endl;
    }
    
};
void LinkedListt::DeleteFromPosition(int position){
    Node*previous=head;
    Node *after=head;
    if(head==NULL)
        cout<<"NOthing to delete"<<endl;
    else{
        int n=0,k=0;
        cout<<"in else"<<endl;
        
        while(after->next!=NULL)
            
        {   
            cout<<"while loop"<<endl;
            if(k>0)
                head=head->next;
            
            
            
            
            if(n>1)
                previous=previous->next;
            k++;
            n++;
            
            if(n-1==position)
            {   cout<<"in 2 if"<<endl;
                previous->next=after;    
                delete head;
                cout<<"deleted"<<endl;
                
                
               // break;
            }
        }
    }
}