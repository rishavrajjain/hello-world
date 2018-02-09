import pprint
word=input().lower()
dic={}
if(any(c.isnumeric() for c in word)==True):
    print('Invalid input')
    exit()
for x in word:
	if x not in dic:
		dic[x]=word.count(x)
pprint.pprint(dic)		

invd={}
for x in dic.values():
	if x not in invd:
		r=[]
		for m in dic:
			if dic[m]==x:
				r.append(m)
			r.sort()
			invd[x]=r
pprint.pprint(invd)	        
	
