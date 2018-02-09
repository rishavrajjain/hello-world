l=[]
x=int(input())
while x>0:
	y=input()
	r=y.split()
	if r[0]=="insert":
		f=int(r[2])
		l.insert(int(r[1]),f) 
		x=x-1
	elif r[0]=="print":
		print(l)
		x=x-1
	elif r[0]=="append":
		l.append(int(r[1]))
		x=x-1
	
	elif r[0]=="remove":
		l.remove(int(r[1]))
		x=x-1
				
	elif r[0]=="sort":
		l.sort()
		x=x-1
			
	elif r[0]=="pop":
		l.pop()
		x=x-1
			
	elif r[0]=="reverse":
		l.reverse()
		x=x-1
			
		
		
	
		

		
		
		
		
		
		
		

	
