n = int(input())

year = n // 365
n -= year * 365

month = n // 30
n -= month * 30

day = n

print(f"{year} nam {month} thang {day} ngay")
