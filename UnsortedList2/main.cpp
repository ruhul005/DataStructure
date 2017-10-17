

#include <iostream>
#include"unsortedtype.h"


using namespace std;

#include"unsortedtype.h"
#include"unsortedtype.cpp"
int main() {
    
       
    UnsortedType<int>ut;
   // UnsortedType<int>list[5];
    
   
    //Checking The List IF it is empty or not
    
  /*  ut.isFull();
    if(ut.isFull()==0)
    {
        cout<<"List Empty"<<endl;
    }
    */
    
    //inserting 4 items 
    cout<<"Taking 4 values to the list"<<endl;
    int value;
    
   for(int i=1;i<=4;i++)
   {
       cout<<"Enter values"<<endl;
       
        cin>>value;
        ut.insertItem(value);
        
    }
    
    cout<<"DOne taking"<<endl;
    ut.resetList();
    cout<<"Position reseted"<<endl;
    
    for(int i=1;i<=4;i++)
    {
        //cout<<"In printing loop"<<endl;
        int x;
        ut.getNextItem(x);
        cout<<x<<endl;
        
    }
    cout<<"Length is=";cout<<ut.lengthIs()<<endl;
    
    ut.resetList();
    
    cout<<"Insert one item again"<<endl;
    cin>>value;
    ut.insertItem(value);
    ut.resetList();
    
    for(int i=1;i<=5;i++)
    {
        //cout<<"In printing loop 2"<<endl;
        int x;
        ut.getNextItem(x);
        cout<<x<<endl;
        
    }
    
    //retrive item
    
    int x=4;
    bool flag;
    ut.retrieveItem(x,flag);
    if(flag)
        cout<<"found"<<endl;
    else
        cout<<"4 not found"<<endl;
    
     x=5;
    
    ut.retrieveItem(x,flag);
    if(flag)
        cout<<"found";cout<<x<<endl;
   
    
     x=9;
    
    ut.retrieveItem(x,flag);
    if(flag)
        cout<<"found";cout<<x<<endl;
    
        
        
         x=10;
    
    ut.retrieveItem(x,flag);
    if(flag){
        cout<<"found";cout<<x<<endl;
    }
    else
        cout<<"not found"<<endl;
        
        
      
        ut.isFull();
    if(ut.isFull()==0)
    {
        cout<<"List Empty"<<endl;
    }
    else
        cout<<"List full"<<endl;
        
        
        ut.deleteItem(5);
        cout<<"5 deleted"<<endl;
        
        ut.deleteItem(1);
        cout<<"1 deleted"<<endl;
        
        
   
    
    for(int i=1;i<=5;i++)
    {
        //cout<<"In printing loop 2"<<endl;
        int x;
        ut.getNextItem(x);
        cout<<x<<endl;
        
    }
        
         ut.deleteItem(1);
        cout<<"1 deleted"<<endl;
    
    
    for(int i=1;i<=5;i++)
    {
        //cout<<"In printing loop 2"<<endl;
        int x;
        ut.getNextItem(x);
        cout<<x<<endl;
        
    }
    
   // ut.retrieveItem(4,);
    cout<<"done!"<<endl;
    
    
   
   
}

