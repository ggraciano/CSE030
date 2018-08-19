#ifndef DataGen_h
#define DataGen_h

#include <limits>
#include "RandomSupport.h"

// This is a possible solution for the previous lab asking you to generate random numbers in sorted order, without using a sorting algorithm

void efficientRandomSortedList(long temp[], long s){
    
    randomizer device = new_randomizer();
    
    // The idea here is simple. Every time we have to add a number to the list, we will get be sampling from a different range.
    // The first number will be between 0 and limit (size of the list)
    // But the second number will be from whatever the previously generated number was, to the limit
    // That way it will always be greater than the first
    
    // So in general every number will be generated from the range <last_number_generated - limit>
    // The only thing to be careful of is when the last number is close to the limit, in that case, increase the limit.
    
    // The initial range
    long last = 0;
    long limit = s;
    
	long lmax = std::numeric_limits<long>::max();
	
    // Do this as many times as the list is long
    for (long i = 0; i < s; i++) {
        // First check if the last number is close to the limit
        if (limit - last < 10){
            // If it is, then increase the limit
			
			// In case the limit goes over the maximum value a long can hold
			if (lmax - limit < 100){
				limit = lmax;
			}
			else{
	            
	            limit += 100;
			}
        }
        // Pick a random number from the range (last - limit)
        uniform_distribution range = new_distribution(last+1, limit);
        long num = sample(range, device);
        
        // If that number happens to be 42, change it to 43
        if (num == 42){
            num++;
        }
        
        // Insert the current number in the i-th position of the list
        temp[i] = num;
        
        // Update the variable keeping track of the last number we have seen
        last = num;
        
    }
    
}

#endif
