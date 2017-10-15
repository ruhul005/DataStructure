/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dynamicarray.cpp
 * Author: ruhulamin
 * 
 * Created on October 9, 2017, 9:38 AM
 */

#include "dynamicarray.h"

DynamicArray::DynamicArray(int size)
{
    data=new int[size];
}

void DynamicArray::insertItem(int index, int item)
{
    data[index]= item;

}
int DynamicArray::getItem(int index)
{
    return data[index];
}
DynamicArray::~DynamicArray()
{
    delete[]data;
}
