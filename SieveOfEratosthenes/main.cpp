
/* 
 * Assignment 2: 
 * Name:Md Ruhul Amin
 * ID:1512487042
 * Section:01
 *
 * Created on November 27, 2017, 8:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int limit;
    cout<<"Enter value greater than 1 to print all prime between 1 to n:"<<endl;
    cin>>limit;
    int number[limit];
    bool isPrime[limit];
    //Creating a sorted list puting them value
    for(int i=0;i<=limit;i++){
        number[i]=i;
    }
    
    //Initially i declare every number as true so Every index value is true except
    //0 & 1.
    for(int i=2;i<=limit;i++){
        
        isPrime[i]=true;
       
    }
    
    int k=0;
    for(int i=2;i<=limit;i++){
        if(isPrime[i]){      //checking if the value is true. If true then prime
            cout<<number[i]<<" ";//printing primes
            for(int j=2;j<=limit/2,k<limit;j++){
                
                k=j*i;
                if(!isPrime[k])  //if the number is listed as false it won't check
                    continue;
                
                isPrime[k]=false;  //updating list as false which are not prime
            }
            k=2;
        }
        
    }
 
}
