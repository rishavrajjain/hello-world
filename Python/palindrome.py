a=input();

l=len(a)
b=[]
for i in range(l-1,-1,-1):
	b.append(a[i])
r=''.join(b)


if r==a:
	print('Palindrome')
else:
	print('Not a palindrome')	

