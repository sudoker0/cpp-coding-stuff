x = int(input())
y = int(input())

nn = 0
dg = 0

if x > y:
    tmp = x
    x = y
    y = tmp

nn = x
y -= x
dg = y // 2

print(f"{nn} {dg}")
