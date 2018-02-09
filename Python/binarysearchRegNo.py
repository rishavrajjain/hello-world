n=int(input())
name,author,date,accno,avail=[],[],[],[],[]
for i in range(n):
	name.append(input())
	author.append(input())
	date.append(input())
	accno.append(int(input()))
	avail.append(input())

num=int(input())	

upper=n-1
lower=0
count=False
while lower<=upper:
	middle=(lower+upper)//2
	if accno[middle]==num:
		count=True
		break
	elif accno[middle]>num:
		upper=middle-1
	else:
		lower=middle+1
if count==True:
	print('Found')
else:
	print('Not found')				
