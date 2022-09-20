def encontraSubstring (s, n):
    for i in range(n):
        for j in range(n):
            if i != j:
                if s[n] in s[i]+s[j]:
                    return n

    return -1

S = []
N = int(input())

for i in range(N):
    S.append(input())

i = 0
achou = False
while i < N and achou == False:
    if encontraSubstring(S, i) != -1:
        ind = encontraSubstring(S, i)
        achou = True
    
    i += 1

if achou == True:
    print(S[ind])
else:
    print("ok")