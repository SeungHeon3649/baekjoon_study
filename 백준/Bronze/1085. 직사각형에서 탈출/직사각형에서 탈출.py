x, y, w, h = map(int, input().split())
min = x
if min > w - x:
    min = w - x 
if min > h - y:
    min = h - y
if min > y:
    min = y
print(min)