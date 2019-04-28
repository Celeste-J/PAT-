n = int(input())
d = {}
SCORE = []
for i in range(n):
    name, id, score = input().split(' ')
    SCORE.append(int(score))

    person = {}
    person.update(Name = name, Id = id)
    d[int(score)] = person

print(d[max(SCORE)]['Name'], d[max(SCORE)]['Id'])
print(d[min(SCORE)]['Name'], d[min(SCORE)]['Id'])
