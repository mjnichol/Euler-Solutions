# find the first fib number  with 1000 digits
def count_digits(input):
    input = int(input)
    digits = 0
    if input == 0:
        return 1
    while input:
        digits+=1
        input //= 10

    return digits

f1 = 1
f2 = 1

digits = 0
count = 2

while digits!=1000:
    
    term = f1 + f2
    digits = count_digits(term)
    f1 = f2
    f2 = term
    count+=1

print(count)
