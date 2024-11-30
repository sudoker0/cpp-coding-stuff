n = int(input())
k = int(input())
x = int(input())
y = int(input())
tien = 0

if n > k:
    tien = k * x + (n - k) * y
else:
    tien = n * x

print(tien)
