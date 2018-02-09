n=int(input())
k=input()
k=k.split()
a=[]
for i in range(n):
	a.append(k[i])
	

m=max(a)
o=min(a)
l=len(a)
for i in range(l):
	if a[i]<m and a[i]>=o:
		o=a[i] 				

print(o)
