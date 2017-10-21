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
    while(position<2)
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

void LinkedListt::DeleteFromFront(int){
    if(head==NULL)
        cout<<"nothing to delete"<<endl;
    else{
        Node *temp=head->next;
        delete head;
        head=temp;
    }
}