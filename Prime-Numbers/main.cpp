//
//  main.cpp
//  Prime-Numbers
//
//  Created by Mariama Jaiteh on 11/19/16.
//  Copyright © 2016 Mariama Jaiteh. All rights reserved.
//

#include <iostream>
using namespace std;

//Function that checks prime numbers!
int isPrime(int x);

int main(int argc, const char * argv[]) {
    int number;
    cout << "Enter Number: " ;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {   if (isPrime(i))
        {
            for (int j = i+1; j <= number; j++)
            {
                if(!isPrime(j))
                {
                    continue;
                }
                else if(i+j == number)
                {
                    cout << i << " + " << j <<  " = " << number <<endl;
                }
             }
        }
        else
        {
            continue;
        }
    }
    
    return 0;
}

int isPrime(int x)
{
    int count = 0;
    for (int i = 1; i <= x; i++)
    {
       if(x % i == 0)
        {count++;}
    }
    if (count > 2) {return false;}
    else{return true;}
    
}
