/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on October 9, 2017, 7:09 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

template <class T>
class Ruhul
{
    T first,second;
    public:
        Ruhul(T a,T b){
            first=a;
            second=b;
        }
        T bigger();
};
template <class T>
T Ruhul<T>::bigger(){
    if(first>second)
        return first;
    else
        return second;
}


int main() {
    Ruhul <int> ru(50,100);
    cout<<"Bigger is="<< ru.bigger();

    
    
};

