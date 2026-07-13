
import random

# using rng, generate a random lottery ticket
def draw ():
    mys_draw = []
    for i in range (6):
        mys_draw.append(random.randint(1, 49))
    return mys_draw

#Compare the rng ticket to a single other ticket from my_tickets

def compare_single(my_draw, my_tickets):
    counter = 0
    for i in range(6):
        for j in range(6):
            if my_draw[i] == my_tickets[j]:
                counter= counter +1
    return counter

#Compare the rng ticket to all tickets from my_tickets

def compare(my_draw, my_tickets):
    counter=0
    my_list=[]
    for i in range (4):
       counter= compare_single(my_draw, my_tickets[i])
       my_list.append(counter)
    return my_list

# return number of prime numbers in the rng ticket

def primes(my_draw):
    
    counter =0
    for i in range (6):
    
        for j in range(len(my_primes)):
            if my_draw[i]== my_primes[j]:
                counter = counter +1
                break
                
    return counter

#return missing primes in all tickets in my_tickets

def check_primes(my_tickets):
    my_list = []
    for i in range(len(my_primes)):
        found = False
        for k in range(len(my_tickets)):
            for j in range(len(my_tickets[k])):
                if my_tickets[k][j] == my_primes[i]:
                    found = True
                    break
            if found:
                break
        if found ==False:
            my_list.append(my_primes[i])
    return my_list


#total number of draws it takes to get x matches, print a dot every 20 tries

def lotto (my_tickets, x):
    y=0
    draws = 0
    while y<x:
        y=max(compare (draw(), my_tickets))
        draws = draws +1
    print()
    return draws

# Average the number of correct numbers over 20 draws
def draw_average (my_tickets):
    y=0
    draws = 0
    my_list =[]
    while draws<20:
        y=max(compare (draw(), my_tickets))
        my_list.append(y)
        draws = draws +1
            
    return ( sum(my_list) / len(my_list))
    
# Given, tickets to compare against
my_tickets =[
[ 7, 17, 37, 19, 23, 43],
[ 7, 2, 13, 41, 31, 43],
[ 2, 5, 7, 11, 13, 17],
[13, 17, 37, 19, 23, 43] ]

#list of prime numbers 1-49
my_primes = \
[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]

#draw a ticket

my_draw = draw()
print ("Draw" +str(my_draw))

print ("Matches for ticket 3: " + str(compare_single(my_draw, my_tickets[2])))
print ("Matches on each ticket: " + str(compare(my_draw, my_tickets)))
print ("Number of primes: " + str(primes(my_draw)))
print ("Missing Primes: "+ str(check_primes(my_tickets)))
print("Draws to get 3 matches: " +str(lotto(my_tickets, 3)))
print("Draws to get 4 matches: " +str(lotto(my_tickets, 4)))
print("Draws to get 5 matches: " +str(lotto(my_tickets, 5)))
print ()
print ("Average matches over 20 draws: " + str(draw_average(my_tickets)))


    
