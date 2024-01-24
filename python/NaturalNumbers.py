# you are given with n - user input
# write a python program to print n natural number

# 5
# 1 2 3 4 5

# 10 
# 1 2 3 4 5 6 7 8 9 10

num = int(input("Enter the input: "))

for i in range(1,num+1):
 print(i,end=" ")
print()


# write a python program to get the sum of n Natural numbers..

# input - 5 
# output -  15
 
# input - 10 
# output - 55

a = int(input("Enter the input: "))
sum = 0

for i in range(1,a+1):
     sum = sum + i
    
print(sum)

# write a python program to get all the even values in the given range 

# input - low , high (inclusive)
# output - even values between low and high

# input -  2 10 
# output - 2 4 6 8 10 

# input - 20 25
# input - 20 22 24 

low = int(input())
high = int(input())

for i in range(low, high+1):
   if i%2 == 0:
      print(i,end=" ")
