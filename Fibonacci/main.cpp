/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruhulamin
 *
 * Created on November 21, 2017, 10:07 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int fib(int n);
int factorial(int n);
int sumOfDigits(int n);

int main() {
    
    int x=fib(6);
    cout<<"fibonacci:";
    cout<<x<<endl;
    
    int fact=factorial(6);
    cout<<"factoria;:";
    cout<<fact<<endl;
    
    int sumDigit=sumOfDigits(123);
    cout<<"Sum of digits:";
    cout<<sumDigit<<endl;
}

int fib(int n){
    
    if(n==2||n==1)
        return 1;
    return fib(n-1)+fib(n-2);
    
    }
    

int factorial(int n){
    if(n<=0)
        return 1;
    
    return n*factorial(n-1);
}

int sumOfDigits(int n){
    
    if(n<=0)
        return 0;
    
    return n%10+sumOfDigits(n/10);
    
    
    
}