xr=int(input())
yr=int(input())
xq=int(input())
xq2=xq3=xq4=xq
yq=int(input())
yq2=yq3=yq4=yq
a=set()
b=set()
c=set()
d=set()
for i in range(1,9):
    a.add((i,yr))
    b.add((xr,i))
    c.add((i,yq))
    d.add((xq,i))

fr=set(a|b)
qd=[]

for y in range(yq,9):
    if xq>0:
        qd.append((xq,y))
        xq=xq-1
for x in range(xq2,9):
    if yq2:
        qd.append((x,yq2))
        yq2=yq2-1

for y in range(yq3,9):
    if xq3>0 and xq3<9:
        qd.append((xq3,y))
        xq3=xq3+1
for x in range(xq4,0,-1):
    if yq4>0 and yq4<9:
        qd.append((x,yq4))
        yq4=yq4-1
fqd=set(qd)
fq=c|d|fqd
fr.remove((3,1))
for i in fr:
    if i in fq:
        print(i)
