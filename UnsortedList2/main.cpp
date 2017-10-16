

#include <iostream>
#include"unsortedtype.h"


using namespace std;

#include"unsortedtype.h"
#include"unsortedtype.cpp"
int main() {
    
       
    UnsortedType<int>ut;
    int listSize;
    int list[listSize];
    cout<<"Enter value for list"<<endl;
    cin>>listSize;
    
    ut.insertItem(list[listSize]);
    
    //Checking The List IF it is empty or not
    
    ut.isFull();
    if(ut.isFull()==0)
    {
        cout<<"List Empty"<<endl;
    }
    
    
    //inserting 4 items 
    cout<<"Taking 4 values to the list"<<endl;
    int arr[3];
   for(int i=0;i<=3;i++)
   {
       cout<<"Enter values"<<endl;
        cin>>arr[i];
        ut.insertItem(arr[i]);
        
  
        
    }
   
    
    //Printing those values
    cout<<"Printing them"<<endl;
    for(int j=0;j<=3;j++)
    {
        cout<<arr[j];
    }
    
}

