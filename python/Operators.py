''' 
Operators are a symbols that are used to perform operations.
Types of Operators :
1.Arithmetic Operators (+,-,*,/,//,% , **)
2.Assignment Operators (=, += , -= , *= ,/= , **=)
3.Comparison Operators ( ==, !=, > , < , >= , =<)
4.Logical Operators (AND , OR , NOT)
5.Bitwise Operators (& , |, ~, ^ , >> ,<<)
6.Special Operators (is , is not)
'''
a = 10
b = 5

print(a+b) #15
print(a-b) #5
print(a*b) #50
print(a/b) #2.0
print(a%b) #0
print(a//b) #2
print(a**b) #100000

a += 10
print(a) #20
b -= a # b = b -a = 5 - 20 = -15
print(b) #-15
b *= -5
print(b) #75

if(a == b):
  print("a=b")
else:
   print("a!=b")

if((a < b) and (a <= b)):
   print("a <= b")
else:
   print("a >= b")

# special operators
a = [1,2,3]
b = a

if a is b:
  print("a=b")
else:
  print("a!=b")

randomString = "Ram is good boy"

if "Ram" in randomString:
  print("Ram is present in random String")
else:
  print("Ram is not present in random String")

randomString = "Blue"
if 'k' not in randomString:
  print("k is not present in randomString")
else:
  print("k is present in randomString")