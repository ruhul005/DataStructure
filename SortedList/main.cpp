/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on October 24, 2017, 9:56 AM
 */

#include <iostream>
#include "SortedType.cpp"

using namespace std;

/*
 * 
 */

int main() {
    
     SortedType<int> st;
     
     
     
     
     st.LengthIS();
     cout<<st.LengthIS()<<endl;
     int x=0;
     for(int i=0;i<=5;i++){
         cin>>x;
         st.InsertItem(x);
     }
     
     st.ResetList();
     
      x=6;
     st.GetNextItem(x);
     
     x=5;
     st.ResetList();
     
   
     cout<<st.isFull()<<endl;
     
     st.DeleteItem(1);
     st.ResetList();
     
     
     cout<<st.isFull()<<endl;
     
}

