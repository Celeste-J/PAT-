# 有时可以全部通过，有时最后一组会超时

n = int(input())
sushu = [True] * (n + 1)
count = 0
for i in range(2, int(n/2 + 1)):
    temp = i + i
    while temp <= n:
        sushu[temp] = False
        temp += i
for j in range(5, n + 1,2):
    if sushu[j] and sushu[j - 2]:
        count += 1
print(count)
