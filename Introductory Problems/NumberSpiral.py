n=int(input())
for i in range(n):
    y,x=map(int,input().strip().split())
    res=0
    if y<=x:
        if x%2==0:
            res= (x-1)**2+1+(y -1)
        else:
            res=x**2-(y -1)
    else:
        if y%2==0:
            res=y**2-(x-1)
        else:
            res=(y-1)**2+1+(x-1)
