#Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
#please give it a star thank you

t = int(input())

for t_ in range (t):
    n = int (input ())
    a = list(input().split())
    b=map(int, a)
    mn = min (b)
    print (str (((mn + n - 1) // mn) + 3) + '\n')