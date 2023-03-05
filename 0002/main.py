sum = 0
before = 0
now = 1
next = 0
while next < 4000001:
    if next % 2 == 0:
        sum += next
    before = now
    now = next
print(next)
