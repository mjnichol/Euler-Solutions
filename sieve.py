#!/usr/bin/python
#Filename: sieve.py
import math

# python implementation of the sieve of eratosthenes
# returns a list of all the primes up to that limit
def sieve(limit):
    integers = []
    for ints in range(2,limit+1):
        integers.append(ints)

    # this is how high you need to check with the sieve
    ceiling = int(math.sqrt(limit)) + 1
    sieve = 2
    
    while(sieve < ceiling):
        j = 2*sieve
        while(j < limit + 1):
            integers[j-2]=0
            j+=sieve
        for ints in integers:
            if(ints > sieve):
                sieve = ints
                break
        
    primes = []
    for prime in integers:
        if(prime):
            primes.append(prime)

    return primes

