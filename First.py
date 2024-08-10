#checking if a number is prime or not
import math
def check(n):
    if  n <= 1:
        return "Not a prime"
    for i in range(2,math.floor(math.sqrt(n)) + 1):
        if n%i == 0:
            return "Not a prime"
    return "is prime"

print(check(17))  