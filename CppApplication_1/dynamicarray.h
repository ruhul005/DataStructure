/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   dynamicarray.h
 * Author: ruhulamin
 *
 * Created on October 9, 2017, 9:38 AM
 */

#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED

class DynamicArray{

private:
    int*data;

public:
    DynamicArray(int);
    ~DynamicArray();
    void insertItem(int,int);
    int getItem(int);

};

#endif // DYNAMICARRAY_H_INCLUDED


