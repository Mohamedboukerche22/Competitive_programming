#https://codeforces.com/contest/2125/problem/C
for _ in range(int(input())):
    l, r = map(int, input().split())
    ps = [2, 3, 5, 7]

    def f(x):
        res = 0
        for mask in range(16): 
            m = 1
            sg = 1
            for i in range(4):
                if mask & (1 << i):
                    m *= ps[i]
                    sg *= -1
            if m > 0:
                res += sg * (x // m)
        return res

    print(f(r) - f(l - 1))
