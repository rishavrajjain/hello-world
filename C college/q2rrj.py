import collections
a={}
for i in range(3):
	x=input().split()
	r=x[0]
	m=int(x[1])
	a[m]=r
print(a)
print(tuple(a.values()))	

	

