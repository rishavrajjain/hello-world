x=int(input())
a=[]
for i in range(x+1):
	a.append(int(input()))
y=int(input())
b=[]
diff=x-y
for i in range(y+1+diff):
	if i<y+1:
		b.append(int(input()))
		print(i)
		print(b)
	else:
		b.append(0)
		print(b)
a.reverse()	
b.reverse()
print(a)
print(b)
f=[]
for i in range(x+1):
	f.append(a[i]+b[i])
print(f)	
	
