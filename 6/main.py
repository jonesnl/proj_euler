#!/usr/bin/env python3

import math

def diff_sum_squares(number):
    """Finds the difference between the sum of squares and square of sums

    returns (1 + 2 + 3 + ... + number)^2 - 
        (1^2 + 2^2 + 3^2 + ... + number^2)"""

    square_of_sums = 0
    sum_of_squares = 0

    for i in range(1, number + 1):
        square_of_sums += i
        sum_of_squares += i ** 2

    square_of_sums = square_of_sums ** 2

    answer = square_of_sums - sum_of_squares
    
    return answer


exp = input("Please enter exponent for difference of sum" 
        + " of squares and square of sums: ")
print(diff_sum_squares(int(exp)))
