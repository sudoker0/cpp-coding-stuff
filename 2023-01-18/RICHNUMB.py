from math import sqrt, floor

n = int(input())
result = 1

for i in range(2, floor(sqrt(n)) + 1):
    if n % i == 0:
        result += i

        if i != n / i:
            result += int(n / i)

if result > n:
    print("Rich Number")
else:
    print("Poor Number")
