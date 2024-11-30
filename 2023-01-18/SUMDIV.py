from math import sqrt, floor

n = int(input())
result: list[int] = [1, n]
total = 0

for i in range(2, floor(sqrt(n)) + 1):
    if n % i == 0:
        result.append(i)

        if i != n / i:
            result.append(int(n / i))

for i in result:
    total += i

if n <= 1:
    total = 1

print(total)
