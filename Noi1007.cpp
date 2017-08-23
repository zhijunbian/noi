//
//  Noi1007.cpp
//  
//
//  Created by Jinsong Bian on 8/21/17.
//
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    a = fmod(a,b);
    cout.precision(2);
    cout<<a;
    
    return 0;
}
