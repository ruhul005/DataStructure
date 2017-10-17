#include"LinkedList.h"
#include <cstddef>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;




};

Node *head = NULL;

void LinkedList::InsertAtFront(int item){
    if (head == NULL){
        head = new Node();//creates a new node. head has the address of it.
        head -> data = item;
        head -> next=NULL;

    }
    else{
        Node *temp = new Node();
        temp -> data = item;
        temp -> next = head;
        head = temp;
    }

};

void LinkedList :: PrintList(){
    Node *temp = head;
    while(temp->next != NULL){
        cout<< temp-> data  << " ";
        temp = temp-> next;
    }
    cout<< temp->data<< endl;


};
 void LinkedList::InsertAtBack(int item){
     Node *temp = new Node();
     temp->data = item;
     temp->next = NULL;

     Node *temp2 = head;
     while(temp2->next!= NULL){
        temp2 = temp2->next;
     }
     temp2->next = temp;
}

bool LinkedList::Search(int key){
    bool flag= false;
    Node *temp = head;
    while(temp->next!=NULL){
        if(temp->data == key){
            flag = true;
            break;
        }
        temp= temp->next;
    }
    if(temp->data==key)
        flag = true;
    return flag;
}
void LinkedList::DeleteItemFromFront(){
    if(head==NULL){
        cout<<"Nothing to delete"<<endl;
    }
    else{
        Node *temp = head->next;
        delete head;
        head = temp;
    }
}
void LinkedList::DeleteItemFromBack(){

}
