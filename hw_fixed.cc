#include <iostream>
#include <vector>
#include <cmath>
//*******************************************************************
// Functionality:this function takes in to parameters and plugs them into standard deviation formula to find the standard deviation of the set
// Parameters:a- sum of the {elements minus the average}
//            n- number of values in the set
// Return value:standard deviation of the set
//*******************************************************************


double deviation( int* a, int n )
{
	int sum;
	for(size_t i = 0; i <= n-1; i++)
	{
		sum += a;
	} 
	double mean = sum /= (n-1);
	double stddev = 0;
	for(size_t i = 0; i <= n -2; i++)
	{
		stddev += (a - mean) * (a - mean); 
	}
	stddev /= (n-1);
	if( stddev = 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
