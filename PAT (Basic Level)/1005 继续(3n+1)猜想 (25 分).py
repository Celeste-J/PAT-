def fun(n):
    if n % 2 == 0:
        n /= 2
    else:
        n = (3 * n + 1) / 2

    return int(n)

n = int(input())
num = input().split()
res = set([int(x) for x in num])
for i in range(n):
    temp = int(num[i])
    while temp != 1:
        temp = fun(temp)
        if temp in res:
            res.remove(temp)

res = sorted(list(res))
res = list(reversed(res))
res_str = [str(x) for x in res]
print(' '.join(res_str))
