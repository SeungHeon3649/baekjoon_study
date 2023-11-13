alp = {'A' : 0, 'B' : 0, 'C' : 0, 'D' : 0, 'E' : 0, 'F' : 0, 'G' : 0, 'H' : 0, 'I' : 0, 'J' : 0, 'K' : 0, 'L' : 0, 'M' : 0, 'N' : 0, 'O' : 0, 'P' : 0, 'Q' : 0,
       'R' : 0, 'S' : 0, 'T' : 0, 'U' : 0, 'V' : 0, 'W' : 0, 'X' : 0, 'Y' : 0, 'Z' : 0}

text = input()
text = text.upper()
for i in text:
    alp[i] += 1
cnt = 0
max_val = max(alp.values())
for i in alp:
    if alp[i] == max_val:
        cnt += 1

if cnt > 1:
    print("?")
else:
    print(max(alp, key = alp.get))