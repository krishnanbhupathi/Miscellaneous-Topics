'''
1.This is my first program
2.Here we are going to learn about variable
3.Here we are going to learn about keywords
 - Learn all those keywords.
4.Data Type, type conversion (implicit and explict)
5.Comments in python 
'''


# initializing krishna to name variable
name = "krishna"
#printing the name
print(name)

'''
Data Types in python
Numeric - int , float , complex
Strings - str (used to store set of characters)
char - char (used to store character - a, A )
Boolean - bool (True and False)
Null value - None
'''
val = 21 #Integer
data = 3.14325 #floating point values
ch = 'h' #Characters
place = 'Kurnool' # set of characters
bool = True #Boolean value

print(val,data)
print("character in ch variable :",ch)
print(place,end=" ") # End parameter is used to avoid new line in console
print("printing after previous print statement")

data = None #None in python is nothing but null value for that variable
data = True
print(data)

data = 7+5j
print(data)

#type method which will give the type of variable

data = 124
data2 = 123.21
print(type(data2)) #float
print(type(data)) #int

randomValue = 43.21
print("Floating point value",randomValue)
randomValue = int(randomValue)
print("Float converted to int",randomValue)

# data = input("Enter your input:")
# print(type(data))

# data = float(input("input : "))
# print(data)
# print(type(data))

#Implicit conversion in python
floatVal = 2.301 
intVal = 3
result = floatVal + intVal
print(result) #5.301
print(type(result)) # floating 

#Explicit conversion in python

string_data = '12'
integer_data = 20
result = int(string_data) + integer_data
print(result)