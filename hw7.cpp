#include "hw7.hpp"

double stddev(int n, ...){
    
    va_list args; //holds information used for va_start and va_end
    va_start(args, n);
    double sum = 0;
    double variance = 0;
    
    
    int elements[n];
    for (int i = 0; i < n; i++)
    {
        int num = va_arg(args, int);
        elements[i]  = num;  // put numbers into an array
    }
    
    for (int i = 0; i < n ; i++)
    {
        sum += elements[i];  // calculates sum
    }
    cout << "The sum is: " << sum << endl;
    
    va_end(args);
    va_start(args, n);
    double average = sum /= n; //calculate average
    cout << "The average is: " << average << endl;
    
    
    for(size_t x = 0; x < n; ++x)
    {
        int y = va_arg(args, int);
        variance += (y - average) * (y - average);
    }
    
    va_end(args);
    variance /= n;
    
    //message if the standard deviation is zero
    if(variance == 0){
        cout << "Sigma is zero." <<endl;
    }
    
    return sqrt(variance); //return standard deviation
}
