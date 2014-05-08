#!/usr/bin/env python3

number = int(input("What prime number would you like to find? "))

primes = [2]
cur_num = 2

while len(primes) < number:
    cur_num += 1
    prime = True
    #check if number is a prime
    for j in primes:
        if cur_num % j == 0:
            prime = False
            break
    if prime == True:
        primes.append(cur_num)

print(primes[-1])
            
    

