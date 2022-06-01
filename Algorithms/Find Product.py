#Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
#please give it a star thank you



x = pow(10,9)+7
n  = int(input())
l = list(map(int,input().split()))
ans =1
for i in range(n):
    ans = (ans*l[i])%x
print(ans)