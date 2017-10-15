/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on October 9, 2017, 9:37 AM
 */

#include <iostream>
#include "dynamicarray.h"

using namespace std;

int main()
{
    cout<<"Enter size of array:"<<endl;
    int size;
    cin>>size;
    
    DynamicArray d(size);
    
    int temp;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter value to index="<<i<<endl;
        cin>>temp;
        d.insertItem(i,temp);
    }
    int temp2;
    for(int i=0;i<size;i++)
    {
        temp2=d.getItem(i);
        cout<<"Index="<<i;cout<<",Value="<<temp2<<endl;
    }
    return 0;
    
    
};


