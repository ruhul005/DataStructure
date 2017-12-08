/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on December 5, 2017, 11:43 AM
 */

#include <iostream>
#include"quetype.cpp"

using namespace std;

/*
 * 
 */

int main() {

    QueType<int> Bruce;
    QueType<int> Clark;
    
    cout<<"Enter  price for Bruce"<<endl;
    
    int bruceCost=0;
    for(int i=0;i<=10;i++){
        cin>>bruceCost;
        Bruce.Enqueue(bruceCost);
    }
    
    cout<<"Enter  price for Clark"<<endl;
    int clarkCost=0;
    for(int i=0;i<=11;i++){
        cin>>clarkCost;
        Clark.Enqueue(clarkCost);
    }
    
    //QueType<int>tempBruce;
    
    int x=0;
   
    int totalPurchaseBruce=0;
            
    while(!Bruce.IsEmpty()){
        Bruce.Dequeue(x);
        totalPurchaseBruce=totalPurchaseBruce+x;
            }
    
    cout<<"Tottal purchare of Bruce:";
    cout<<totalPurchaseBruce<<endl;
    
    
     x=0;
   
    int totalPurchaseClark=0;
            
    while(!Clark.IsEmpty()){
        Clark.Dequeue(x);
        totalPurchaseClark=totalPurchaseClark+x;
            }
    cout<<"Tottal purchare of clark:";
    cout<<totalPurchaseClark<<endl;
    
    
    
    //Final Amount to be paid
    
    float finalCostBruce=0;
    float finalCostClark=0;
    if(totalPurchaseBruce>=10000)
    {
    finalCostBruce=(totalPurchaseBruce-(totalPurchaseBruce*.15));
    }
    else
        finalCostBruce=(totalPurchaseBruce-(totalPurchaseBruce*.05));
    
    
    if(totalPurchaseClark>=10000)
    {
    finalCostBruce=(totalPurchaseClark-(totalPurchaseClark*.15));
    }
    else
        finalCostClark=(totalPurchaseClark-(totalPurchaseClark*.05));
    
    
    cout<<"Final amount for bruce:";
    cout<<finalCostBruce<<endl;
    
    cout<<"Final amount for clark:";
    cout<<finalCostClark<<endl;
    
    //combined bill
    
    float y=1.0*(totalPurchaseClark+totalPurchaseBruce);
    cout<<"Toatal Purchased amount:";
    cout<<y<<endl;
    
    int combinedBill=finalCostClark+finalCostBruce;
    cout<<"Final  bill to be paid:";
    cout<<combinedBill<<endl;

}