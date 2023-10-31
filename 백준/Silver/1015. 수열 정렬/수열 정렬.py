n = int(input())
p = [i for i in range(n)] # 0 1 2
a = list(map(int, input().split()))
b = [0 for _ in range(n)] # 0 0 0

min_num = sorted(a)
idx = []
c = 0

for i in range(n):
    for j in range(len(a)):
        if j in idx:
            continue
        elif min_num[i] == a[j]:
            idx.append(j)

for i in range(n):
    b[idx[i]] = p[i]

for i in b:
    print(i, end = " ")
