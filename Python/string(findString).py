a="ABCDCDC"#len--7
c="CDC"#len--3
print("given len",len(a)-len(c)+1)
print("your len",len(a)-len(c))

count = 0
for i in range(len(a)-len(c)+1):
	print("Value of i",i)
	print ("a value",a[i:i+len(c)])
	print ("Length",i+len(c))
	if (a[i:i+len(c)] == c):
		count += 1
print(count)
