n=int(input())
t=[]
for i in range(n):
	x=int(input())
	y=int(input())
	z=int(input())
	r=x+y+z
	t.append(r)	

for i in range(1,len(t)):
	for j in range(i-1,-1,-1):
		if t[j]<t[j+1]:
			temp=t[j]
			t[j]=t[j+1]
			t[j+1]=temp								
print(t)
