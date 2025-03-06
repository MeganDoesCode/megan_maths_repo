//
//  main.cpp
//  Git and GitHub Practice Lab
//
//  Created by Megan Jensen on 3/6/25.
//

#include <iostream>

using namespace std;

void square(int num);

int main()
{
    cout<<"GitHub Test!"<<endl;
    
    square(26);
    
    return 1;
}

void square(int num)
{
    int squareNum = num * num;
    
    cout<<squareNum<<endl;
}
