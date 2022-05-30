#Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
#please give it a star thank you


#py 2.7

def solution (A, K):
   
    ans=0  
    if K > len(A):
        for row in A:
             ans+=(min(row.count("T"),row.count("P")))
        return ans
        
    for row in A:
        arr_len = len(row)
        for i in range(arr_len):
            if row[i] == 'P':
                thieve_found = False
                for thief in range(max(0,i-K),min(i+K+1,arr_len)):
                    if row[thief] == 'T':
                        row[thief] = 'X'
                        thieve_found = True
                        break
                
                if thieve_found:
                    ans += 1
    return ans               

        
 
T = input()
for _ in xrange(T):
    N, K = map(int, raw_input().split())
    A = []
    for _ in xrange(N):
        A.append(raw_input().split())
    out_ = solution(A, K)
    print out_