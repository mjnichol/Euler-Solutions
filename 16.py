import math

value = long(1)
exp = 0

while(exp<1000):
    value*=2
    exp=exp+1;

print(value)

sum = 0

bin = [0,0,0,0,0,0,0,0,0,0]

while(value):
    sum+=value%10
    bin[value%10]+=1
    value=value/10
    
print(sum)

sum = 0
for digits in bin:
    print(digits)
    sum+=digits

print(sum)
