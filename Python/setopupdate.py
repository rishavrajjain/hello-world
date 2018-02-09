d=int(input())
s=set(map(int, input().split())) 
n=int(input())
for i in range(n):
	y=input()
	r=y.split()
	if r[0]=="intersection_update":
		a = set(map(int,input().split()))
		s.intersection_update(a)
	elif r[0]=="update":
		b = set(map(int,input().split()))
		s.update(b)
	elif r[0]=="symmetric_difference_update":
		c = set(map(int,input().split()))
		s.symmetric_difference_update(c)
        
	elif r[0]=="difference_update":
		d = set(map(int,input().split()))    
		s.difference_update(d)
sum=0
for i in s:
    sum=sum+i
print(sum)    

