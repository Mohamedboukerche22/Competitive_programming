n = int(input())
for _ in range(n):
 s = str(input())
 if len(s) == 11 or len(s) >11:
    print(s[0] , end='')
    print(len(s)-2 ,end='')
    print(s[-1] )
 else:
    print(s)
