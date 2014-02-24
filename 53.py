import math

def combo(n,r):
    return math.factorial(n)/( math.factorial(r) * math.factorial(n - r))

n = 23

count = 0

while n < 101:
    
    r = 0
    while r < n:
        if( combo(n,r) > 1000000):
            count+=1
        r+=1

    n+=1

print(count)
