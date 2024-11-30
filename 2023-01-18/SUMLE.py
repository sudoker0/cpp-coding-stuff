x = int(input())
y = int(input())

a = min(x, y)
b = max(x, y)

total = 0

for i in range(a + 1, b):
    if i % 2 == 0:
        continue

    total += i

print(total)
