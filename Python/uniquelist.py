g = []
n=int(input())
for i in range(0,n):
	x=input()
	if x not in g:
		g.append(x)


r=input()
if r in g:
	m="Found"
else:
	m="Not found"	
	
print(g)
print(m)	


