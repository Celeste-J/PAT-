def fun1(temp):
    # 判断是否符合条件1
    for i in temp:
        if i not in ['P', 'A', 'T']:
            return False
    return True

def fun2(temp):
    # 判断是否符合条件2
    index = temp.find('PAT')
    if index < 0 :
        return False

    a = temp[:index]
    if index + 3 == len(temp):
        c = ''
    else:
        c = temp[index + 3:]
    if a != c:
        return False
    if c != '':
        for j in c:
            if j != 'A':
                return False

    return True

def fun3(temp):
    # 判断是否符合条件3
    pos_p = temp.find('P')
    if pos_p < 0:
        return False

    a = temp[:pos_p]
    pos_at = temp.find('AT')
    if pos_at < 0:
        return False

    b = temp[pos_p + 1:pos_at]
    c = temp[pos_at + 2 :temp.rfind(a)]
    if b == '':
        return fun2(temp)
    else:
        return fun3(a + 'P' + b + 'T' + c)


def fun(temp):
    if not fun1(temp):
        print("NO")
        return

    if fun3(temp):
        print('YES')
    else:
        print('NO')


n = int(input())
for i in range(n):
    temp = input()
    fun(temp)
