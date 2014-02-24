import sys

t = False
h = False
e = False



cipher1 = 97 # change to 97 after a test
while cipher1 < 123:
    cipher2 = 97
    while cipher2 < 123:
        cipher3 = 97
        while cipher3 < 123:
            summ = 0
            w = open('decrypt1.txt', 'w') #open for reading and writing
            r = open('cipher1.txt', 'r') #open for reading
            the_count = 0
            i = 0
            for line in r:
                buff = ''
                set = {'116','104','101'}
                for char in line:
                    if char==',':

                        
                        if (i%3)==0:
                            
                            letter = str(int(buff) ^ cipher1)
                            summ+=int(letter)
                             # check to see if the word 'the' is spelled
                            if letter == '116':
                                t = True
                            if letter == '104' and t == True:
                                h = True
                            if letter == '101' and t == True and h == True:
                                e = True
                            if letter not in set:
                                t = False
                                h = False
                                e = False
                            w.write(letter)

                        if (i%3)==1:

                            letter = str(int(buff) ^ cipher2)
                            summ+=int(letter)
                             # check to see if the word 'the' is spelled
                            if letter == '116':
                                t = True
                            if letter == '104' and t == True:
                                h = True
                            if letter == '101' and t == True and h == True:
                                e = True
                            if letter not in set:
                                t = False
                                h = False
                                e = False
                            w.write(letter)
                            
                        if (i%3)==2:
                           
                            letter = str(int(buff) ^ cipher3)
                            summ+=int(letter)
                             # check to see if the word 'the' is spelled
                            if letter == '116':
                                t = True
                            if letter == '104' and t == True:
                                h = True
                            if letter == '101' and t == True and h == True:
                                e = True
                                the_count+=1
                            if letter not in set:
                                t = False
                                h = False
                                e = False
                            w.write(letter)
                            
                        i+=1
                        
                        w.write(",")
                        buff =''
                    else:
                        buff+=char
                        

            if the_count > 2: 
                            r.close()
                            w.close()
                            print("sum is")
                            print(summ)
                            
                            sys.exit(0)

            w.close()
            r.close()
            cipher3+=1
        cipher2+=1
    cipher1+=1

print("not found!")

