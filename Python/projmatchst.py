import random
import time
print("                                    WELCOME")

print("    			     The Game Of 20 Sticks")
t=20
while t>0:
	print("User draw sticks: ",end="")
	y=int(input())
	if y>=1 and y<=4:
		t-=y
	else:
		print("				Invalid Input")
		break
	if t<=0:
			print("			Sorry!! You LOSE")	
			break
		
	print("Sticks remaining: ",t)	
		
	print("Computer draws:",end="")
	time.sleep(2)
		
	
	
	if t==4:
		x=3
	elif t==5:
		x=4
	elif t==3:
		x=3
	elif t==2:
		x=1
	elif t==1:
		x=1				
	else:
		x=random.randint(1,4)
		
	
	print(x)
	t-=x
	print("Sticks remaining= ",t)
	if t<=0:
		print("				You WIN")
		break
