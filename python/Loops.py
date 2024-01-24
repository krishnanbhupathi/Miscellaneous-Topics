# Loops are nothing but repeating a particular part of code

# about range function
# range(start,end,increment/decrement)

# what conversion it is ?
# it is a explicit conversion
# single parameter start point is always 0 in this case, increment is always +1
data = range(10)
print(list(data))

# here the third parameter is always taken by 1, always range increase by 1
li = range(1,10)
li = list(li)
print(li)

# Giving all the parameters
li = range(20,1,-2)
print(list(li))

# simple for-loop syntax
for i in range(10):
	print(i,end=" ")
	print("Hello Everyone!")

# you can use only underscore(_) in special symbols
for _ in range(10):
	print(_)

# you must know the number of iterations when you are using for loop
# every index starts from the 0 ...
# len() method is used to get the size of list or dictionary ... 
li = [11,22,33,44,55]
sum = 0
# here we are accessing elements using index
for i in range(0,len(li)):
	sum = sum  + li[i]

print(sum)


places = ["Switzerland", "Paris", "London", "Thailand"]
# we can access elements of the list in another way that is for-each loop

for place in places:
	print(place) # accessing each element

print("Nested For loops")
# Nested loops - Loop inside another loop is known as nested loops
	
#Outer loop will always gives you the each place
for place in places:
		# This inner loop will do accessing on particular place which is paris
		# accessing each character in a particular string
		print(place,end="->") 
		for i in range(len(place)):
			print(place[i],end=" ") 
			print()
