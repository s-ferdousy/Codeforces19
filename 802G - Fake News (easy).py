s = input()
target = "heidi"
j = 0
s_len = len(s)
for i in range(0, s_len):
    if s[i] == target[j]:
        j += 1
        if j == len(target):
            break
if (j == len(target)):
    print("YES")
else:
    print("NO")