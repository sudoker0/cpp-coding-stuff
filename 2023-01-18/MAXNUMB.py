from math import inf

content = ""
with open("MAXNUMB.INP", "r", encoding="utf-8") as f:
    content = f.readline()

pos = 0
largest = -inf

arr = content.split(" ")
arr2: list[int] = []

for i in arr:
    arr2.append(int(i))

for i, data in enumerate(arr2):
    if data > largest:
        largest = data
        pos = i

with open("MAXNUMB.OUT", "w", encoding="utf-8") as f:
    f.write(f"{largest} {pos + 1}")

