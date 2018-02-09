a=[]
x=input().split()
y=input().split()

for m in range(int(x[0])):
    a.append(int(y[m]))
for j in range(int(x[1])):
	for i in range(int(x[0])-1):
		t=a[i]
		a[i]=a[i+1]
		a[i+1]=t
for c in range(len(a)):
        print(a[c],end=" ")	
