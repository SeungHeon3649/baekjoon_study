n = int(input())
n_list = []
for i in str(n):
    n_list.append(i)
n_list.sort(reverse = True)
n_str = "".join(n_list)
print(int(n_str))