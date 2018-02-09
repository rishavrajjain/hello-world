def searc(s,l):
	first=0
	last=5
	r=(n+1)//2
	mid=r-1
	print(mid)
	while(last>first):	
		r=(first+last+1)//2
		mid=r-1
		if l[mid]==s:
			print("Found")
			break
		elif s<l[mid]:
			last=mid
		elif s>l[mid]:
			first=mid	
			

l=[]
n=int(input())
for i in range(n):
	x=int(input())
	l.append(x)
print(l)
searc(2,l)	
	

			
