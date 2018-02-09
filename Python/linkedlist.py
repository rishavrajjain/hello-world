class Element(object):
	def _init_(self,value):
		self.value=value
		self.next=None
class LinkedList(object):
	def _init_(self,head=None):
		self.head=head
def append(self,neew_element):
	current=self.head
	if self.head:
		while current.next:
			current=current.next
			current.next=new_element
	else:
		self.head=new_element
		
e1=Element()
print(e1)							
