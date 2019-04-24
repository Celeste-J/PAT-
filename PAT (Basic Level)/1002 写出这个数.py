n = input()
sum = 0
for i in n:
    sum += int(i)

res = []
pinyin = ['ling','yi','er','san','si','wu','liu','qi','ba','jiu']
for j in str(sum):
    res.append(pinyin[int(j)])

print(' '.join(res))
