n = int(input())
tien = 0

if n < 50:
    tien = n * 100
elif n >= 50 and n < 1000:
    tien = n * 500
elif n >= 1000 and n < 10000:
    tien = n * 1000
else:
    tien = n * 1200

print(tien)
