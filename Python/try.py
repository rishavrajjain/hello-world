import pygame
import time
import random

pygame.init()
display_width=800
display_height=600
gameDisplay=pygame.display.set_mode((display_width,display_height))
pygame.display.set_caption('Snake it')
clock=pygame.time.Clock()

white=(255,255,255)
black=(0,0,0)
red=(255,0,0)
green=(0,155,0)
gameExit=False

#lead_x=display_width/2
#lead_y=display_height/2

blocksize=10
FPS=30

lead_x_change=0
lead_y_change=0

font=pygame.font.SysFont(None,25)

def snake(blocksize,snakeList):
	for XnY in snakeList:
		pygame.draw.rect(gameDisplay,green,[XnY[0],XnY[1],blocksize,blocksize])
		

def message_to_screen(msg,color):
	screen_text = font.render(msg,True,color)
	gameDisplay.blit(screen_text,[display_width/2,display_height/2])

def gameLoop():
	gameExit=False
	gameOver=False

	lead_x=display_width/2
	lead_y=display_height/2

	blocksize=10
	FPS=30
	
	snakeList=[]
	snakeLength=1

	lead_x_change=0
	lead_y_change=0
	
	randAppleX=round(random.randrange(0,display_width-blocksize)/10.0)*10.0
	randAppleY=round(random.randrange(0,display_height-blocksize)/10.0)*10.0
	
	
	while gameExit==False:
		while gameOver==True:
			gameDisplay.fill(white)
			message_to_screen("c play q quit",red)
			pygame.display.update()
			
			for event in pygame.event.get():
				if event.type==pygame.KEYDOWN:
					if event.key== pygame.K_q:
						gameExit=True
						gameOver=False
					if event.key== pygame.K_c:
						gameLoop()
						
		for event in pygame.event.get():
			print(event)
			if event.type==pygame.QUIT:
				gameExit=True
			if event.type==pygame.KEYDOWN:
				if event.key==pygame.K_LEFT:
					lead_x_change = -blocksize
					lead_y_change=0
				if event.key==pygame.K_RIGHT:
					lead_x_change = blocksize
					lead_y_change=0	
				if event.key==pygame.K_UP:
					lead_y_change = -blocksize
					lead_x_change=0
				if event.key==pygame.K_DOWN:
					lead_y_change =blocksize
					lead_x_change=0			
		if lead_x>=display_width or lead_x<=0 or lead_y>=display_height or lead_y<=0:
			gameOver=True	
		lead_x+=lead_x_change
		lead_y+=lead_y_change
		
		if len(snakeList)>snakeLength:
			del snakeList[0]
		
		for eachSegment in snakeList[:-1]:
			if snakeHead==eachSegment:
				gameOver=True
		
		snake(blocksize,snakeList)
		pygame.display.update()	
		
		if lead_x==randAppleX and lead_y==randAppleY:
			print(display_width-blocksize)
			print(display_height-blocksize)
			randAppleX=round(random.randrange(0,display_width-blocksize)/10.0)*10.0
			randAppleY=round(random.randrange(0,display_height-blocksize)/10.0)*10.0
			snakeLength +=1
				
		gameDisplay.fill(white)
		
		pygame.draw.rect(gameDisplay,red,[randAppleX,randAppleY,blocksize,blocksize])
		
		snakeHead=[]
		snakeHead.append(lead_x)
		snakeHead.append(lead_y)
		snakeList.append(snakeHead)
		
		
		clock.tick(FPS)
	
		
	

	pygame.quit()
	quit()			

gameLoop()
