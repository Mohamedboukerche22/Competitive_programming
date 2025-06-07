s = str(input())
array = []
for i in s:
    if i == '+':
        continue
    else :
        array.append(int(i))
        
array.sort()
for i in range(len(array)):
    if i == len(array) - 1:
        print(array[i])
    else:
        print(array[i], end='+')
