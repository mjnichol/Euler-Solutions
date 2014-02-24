import math

s = set()
value = long(1)

for i in range(2,101):
    for j in range(2,101):
        value = math.pow(i,j)
        s.add(value)

#print(s)
print(len(s))

