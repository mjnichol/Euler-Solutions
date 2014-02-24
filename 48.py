import math

sum = long(0) 
i = long(1);

while(i<1001):
    sum+=i**i
    i+=1

print(sum%int(10**10))
