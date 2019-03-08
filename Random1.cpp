//
//  Random1.cpp
//  Hello Quant_World
//
//  Created by Mamoudou Diallo on 3/6/19.
//  Copyright © 2019 Talibé. All rights reserved.
//

//#include <stdio.h>
#include "Random1.h"
#include <cmath>
#include <cstdlib>


#if !defined(_MSC_VER)
using namespace std;
#endif

double GetOneGaussianBySummation()
{
    double result=0;
    for (unsigned long j=0; j < 12; j++)
        result += rand()/static_cast<double>(RAND_MAX);
    result -= 6.0;
    return result;
}


double GetOneGaussianByBoxMuller (){
        double result;
        double x;
        double y;
        
        double SizeSquared;
        do
        {
            x = 2.0*rand()/static_cast<double>(RAND_MAX)-1;
            y = 2.0*rand()/static_cast<double>(RAND_MAX)-1;
            
            SizeSquared = x*x + y*y;
        }
    
        while
            (SizeSquared >= 1.0);
        
            result = x*sqrt(2*log(SizeSquared) / SizeSquared);
            
            return result;
};
