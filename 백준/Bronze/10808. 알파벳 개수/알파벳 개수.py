alp = [0 for _ in range(26)]
s = input()
for i in s:
    idx = ord(i) - ord('a')
    alp[idx] += 1
for a in alp:
    print(a, end = " ")