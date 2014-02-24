# square and sum digits
def sqr_sum(input):
    sum = 0
    while input:
        sum+=(input%10)**2
        input //= 10
    return sum

stop = {1,89}
set_89 = set()
set_1 = set()
start = 1
count = 0
sum = 0
temp = set()

while start < 10000000:
    seed = start
    while seed not in stop:
        temp.add(seed)
        seed = sqr_sum(seed)
        if seed in set_89:
            seed = 89
        if seed in set_1:
            seed = 1

    if seed == 89:
        for num in temp:
            set_89.add(num)
        set_89.add(start)
        count+=1
    if seed == 1:
        for num in temp:
            set_1.add(num)
        set_1.add(start)
    temp = set()
    start+=1
    
print(count)
