def digits_to_list(num):
    final_list = []
    while num:
        final_list.append(num%10)
        num//=10

    return final_list 

def check_inc(num_list):
    
    prev = -1
    for num in num_list:
        if num >= prev:
            prev = num
        else:
            return False

    return True

def check_dec(num_list):
    prev = 10
    for num in num_list:
        if num <= prev:
            prev = num
        else:
            return False

    return True

total = 99
bouncy = 0
proportion = -1
num = 100

while proportion!=0.99:
    
    if (check_dec(digits_to_list(num))==False and check_inc(digits_to_list(num))==False ):
        bouncy+=1
    total+=1
    proportion=bouncy/total
    num+=1

print(num-1)
