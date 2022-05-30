#Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
#please give it a star thank you

testCase  = int(input())
for _ in range(testCase):
    n,k = map(int,input().split())
    l = list(map(int,input().split()))
    x = k%n
    print(*(l[n-x:]+l[:n-x]))