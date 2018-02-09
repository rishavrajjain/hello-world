r="go"
max=0
i=1
#declare a array
while r=="go":
	x=input()
	if x=="stop":
		r="stop"
		break
	
	if len(x)>max:
		max=len(x)
		long=x
		i=i+1
	else:
		i=i+1	
print(i-1)    
print (long)
print(max)
