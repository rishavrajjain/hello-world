import random
import time
print("                                    WELCOME")

print("    			     	The Guess Game")
r="True"
t=random.randint(1,10)
while(r=="True"):
	print("Choose a number from 1 to 10")
	x=int(input())
	if(x>t):
		print("It is less than",x)
	elif(x<t):
		print("It is greater than",x)
	elif(x==t):
		print("      You WIN")
		r="False"		
