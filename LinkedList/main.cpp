#include"LinkedList.h"
#include <iostream>


using namespace std;

int main(){

    LinkedList l;
    l.InsertAtFront(6);
    l.InsertAtFront(3);
    l.InsertAtFront(5);
    l.PrintList();
    l.InsertAtBack(8);
    l.PrintList();

    if(l.Search(0)){
        cout<<"Key exists"<< endl;

    }
    else{
            cout<<"Key doesn't exist"<< endl;

    }
    l.DeleteItemFromFront();
    l.PrintList();

}
