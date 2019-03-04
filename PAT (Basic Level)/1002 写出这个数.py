n = input()
sum = 0
for i in range(10):
    sum += i * n.count(str(i))

name = ["ling","yi","er","san","si","wu","liu","qi","ba","jiu"]

for i in str(sum)[:-1]:
    print(name[int(i)], end=' ')

print(name[int(str(sum)[-1])])
