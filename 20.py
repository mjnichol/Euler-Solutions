import math

value = long(1)
i = 1
sum = 0
while i < 101:
    value*=i
    i+=1

while(value):
    sum+=value%10
    value=value/10

print(sum)
