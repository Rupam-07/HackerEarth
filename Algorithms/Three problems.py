#Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
#please give it a star thank you

n = int(input())
for z in range(n):
    n = int(input())
    A = [int(i) for i in input().split()]
    B = [int(i) for i in input().split()]
    m = [[int(i) for i in input().split()] for j in range(3)]
    p = [(0, 1, 2), (0, 2, 1), (1, 0, 2), (1, 2, 0), (2, 0, 1), (2, 1, 0)]
    best = 10**18
    for x in p:
        for y in p:
            a, b = A[:], B[:]
            cur=c=d=sum=0
            while (sum != n):
                while (a[x[c]] == 0):
                    c+=1
                while (b[y[d]] == 0):
                    d+=1
                z = min(a[x[c]], b[y[d]])
                a[x[c]]-=z
                b[y[d]]-=z
                sum+=z
                cur+=z*m[x[c]][y[d]]
            best = min(best, cur)
    print(best)