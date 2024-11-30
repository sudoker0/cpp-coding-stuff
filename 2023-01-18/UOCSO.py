from math import sqrt, floor

n = int(input())
result: list[int] = [1, n]

for i in range(2, floor(sqrt(n)) + 1):
    if n % i == 0:
        result.append(i)

        if i != n / i:
            result.append(int(n / i))

result.sort()
r = ""
for i in result:
    r += f"{i} "

if n <= 1:
    r = str(n)

print(r)
