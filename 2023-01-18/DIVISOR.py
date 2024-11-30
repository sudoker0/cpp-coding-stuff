from math import sqrt, floor

n = int(input())
uoc = 2

for i in range(2, floor(sqrt(n)) + 1):
    if n % i == 0:
        uoc += 1
        
        if i != n // i:
            uoc += 1

if n <= 1:
    uoc = 1

print(uoc)
