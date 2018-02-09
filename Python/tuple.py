n = int(input())
t=[]
a=input().split()
for i in range (0,n):
    a[i]=int(a[i])
t=tuple(a)
print(hash(t))
