#!/usr/bin/python3
numbers = []
for i in range(1000):
    for j in range(1000):
        total = i * j
        strtotal = str(total)
        rtotal = ''.join(reversed(strtotal))
        if strtotal == rtotal:
            num =  int(rtotal)
            numbers.append(num)
numbers.sort()
print(numbers)
