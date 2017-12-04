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
int findMinimum(int num[], int size);
int decimalToBinary(int decimal);

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
    int size=8;
    int number[]={45,67,23,67,4,90,47,-4};
    int min=findMinimum(number,size);
    cout<<min<<endl;
    
    
    int decToBin=decimalToBinary(5);
    //cout<<decToBin<<endl;
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

int findMinimum(int num[], int size){
    if(size==1)
        return num[0];
    else{
        if(num[size]<findMinimum(num,size-1))
            return num[size];
        else
            return findMinimum(num,size-1);
    }
}

int decimalToBinary(int decimal){
    if(decimal>0){
        decimalToBinary(decimal/2);
        cout<<decimal%2;
        return 0;
        
    }
}