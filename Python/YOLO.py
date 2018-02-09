m=[]
a=input()

for i in range(3):
	m.append(input()) 

b=max(m, key=len)

m.remove(b)
c=m[0]
d=m[1]

print(a)
j=1
cl=len(c)-1#3
al=len(a)-1#5
if d[cl]==a[0] and c[0]==a[al]:
	while(cl-j>0):
		print(d[cl-j],end='')
		for i in range(len(a)-2):
			print('*',end='')
		print(c[j])
		j=j+1
		
	if d[cl]==b[al]:
		print(b)
	else:
		print(b[::-1])
			
if c[cl]==a[0] and d[0]==a[al]:
	while(cl-j>0):
		print(c[cl-j],end='')
		for i in range(len(a)-2):
			print('*',end='')
		print(d[j])
		j=j+1
		
	if c[cl]==b[al]:
		print(b)
	else:
		print(b[::-1])
