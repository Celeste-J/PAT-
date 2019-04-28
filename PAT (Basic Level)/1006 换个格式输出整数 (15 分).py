a = int(input())
print(a//100 * "B" + (a % 100)//10 * "S" + "".join(map(str, range(1, a % 10 + 1))))
