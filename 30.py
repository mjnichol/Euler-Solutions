list = []

num = 2
while num < 1000000:
    d1 = int(num%10)
    d2 = int((num%100)/10)
    d3 = int((num%1000)/100)
    d4 = int((num%10000)/1000)
    d5 = int((num%100000)/10000)
    d6 = int((num%1000000)/100000)
    d7 = int((num%10000000)/1000000)
    d8 = int((num%100000000)/10000000)
    d9 = int((num%1000000000)/100000000)
    

    compare = d1**5+d2**5+d3**5+d4**5+d5**5+d6**5+d7**5+d8**5+d9**5

    if num == compare:
        list.append(num)
        print(num)
    num+=1

sum = 0 
print(list)
for item in list:
    sum+=item
print(sum)
