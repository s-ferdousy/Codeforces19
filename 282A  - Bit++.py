n = int(input())
value = 0
for _ in range(0, n):
    operation = input()
    if "+" in operation:
        value += 1
    else:
        value -= 1
print (value)