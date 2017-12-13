
a=int(input("enter 1st value"))
b=int(input("enter 2nd value"))
c=int(input("enter 3rd value"))

while(1):
	if a==0 and b==0 and c==0:
		break
	else:
		if b==((a+c)/2):
			print("AP",c+(c-b))
		else:
			print("GP", c*(c/b))
		a=int(input("enter 1st value"))
		b=int(input("enter 2nd value"))
		c=int(input("enter 3rd value"))
