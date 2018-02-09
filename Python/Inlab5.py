import pprint
a={}
b={}
for i in range(3):
	r=input()
	o=int(input())
	a[r]=o
for i in range(3):
	r=input()
	o=int(input())
	b[r]=o
a.update(b)

minn=min([x for x in a.values()])
maxx=max([x for x in a.values()])

for i in a.values():
	if i==minn:
		del(i)
		
p=dict((v,k) for k,v in a.items())
pprint.pprint(p)

for i in a:
	if a[i]==maxx:
		print(i)				
