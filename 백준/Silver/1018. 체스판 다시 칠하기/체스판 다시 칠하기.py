n, m = map(int, input().split())
chess = [input() for _ in range(n)]
result_min = float("inf")

for i in range(len(chess) - 7):
    for j in range(len(chess[0]) - 7):
        black_count = 0
        white_count = 0
        for y in range(8):
            for x in range(8):
                if (x + y) % 2 == 0:
                    if chess[i + y][j + x] == "W":
                        black_count += 1
                    elif chess[i + y][j + x] == "B":
                        white_count += 1
                else: # 나누기 홀수 일 때
                    if chess[i + y][j + x] == "W":
                        white_count += 1
                    elif chess[i + y][j + x] == "B":
                        black_count += 1
        mid_result = min(black_count, white_count)
        if result_min > mid_result:
            result_min = mid_result
print(result_min)