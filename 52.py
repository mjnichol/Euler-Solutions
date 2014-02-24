def digits_to_set(num):
    hey = set()
    while num:
        hey.add(num%10)
        num//=10

    return hey # sort the final digit list

num = 0
init_set = set()

while True:
    num+=1
    init_set = digits_to_set(num)

    if ( digits_to_set(2*num) == digits_to_set(3*num) and digits_to_set(3*num)==digits_to_set(4*num) and digits_to_set(4*num)==digits_to_set(5*num) and digits_to_set(6*num)==digits_to_set(5*num) ):
        break
    
print(num)
