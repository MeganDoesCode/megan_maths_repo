//
//  main.cpp
//  Git and GitHub Practice Lab
//
//  Created by Megan Jensen on 3/6/25.
//

#include <iostream>

using namespace std;

void power(int base, int exp);

int main()
{
    cout<<"GitHub Test!"<<endl;
    
    power(26, 2);
    
    return 1;
}

void power(int base, int exp)
{
    int powNum = base;
    
    for (int i = 0; i < exp; i++) {
        powNum *= base;
    }
    
    cout<<powNum<<endl;
}
