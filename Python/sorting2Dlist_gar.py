g = []
n=int(input())
for i in range(0,n):
    g.append([input(), int(input())])

r=[x for (x,y) in sorted(g ,key=lambda x:x[1])]

for i in range(n):
	print(r[i])
