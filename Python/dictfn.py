n = int(input())
sm = {}
a={}
for _ in range(n):
	f=input()
	r=f.split(" ")
	x=r[0]
	y=float(r[1])
	z=float(r[2])
	o=float(r[3]) 
	a.setdefault(x, [])
	a[x].append(y)
	a[x].append(z)
	a[x].append(o)
	sm.update(a)

b=input()
p=sm.get(b)		

sum=0
for i in p:
	sum=sum+i
			
avg=sum/3
print(format(avg, '.2f'))
		
		
		
		
		
		
		
		
		
		
		
		
		
		
      
