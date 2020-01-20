import math

t=int(input())
for _ in range(t):
    n=int(input())
    a=[int(x) for x in input().split()]
    dic={}
    ans=0

    for i in a:
        j=1
        while(j<= math.sqrt(i)):
            if(i%j==0):
                dic[j]=0
                if(j!=i//j):
                    dic[i//j]=0
            j=j+1

    for i in a:
        count=0
        if(dic[i]!=0):
            count=dic[i]
        j=1
        while(j<= math.sqrt(i)):
            if(i%j==0):
                dic[j]+=1
                if(j!=i//j):
                    dic[i//j]+=1
            j=j+1
        ans=ans if ans>count else count
    print(ans)