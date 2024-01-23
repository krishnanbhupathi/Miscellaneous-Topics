a = 12

if (a > 0):
 print("a is positive value")

trainTicket = True

if(trainTicket):
 print("Board the train")
else:
 print("Look in another transportation")

data = 23
if(data > 0):
 print("data is positive value")
elif (data < 0):
 print("data is negative value")
else:
 print("zero")

data = 0
if data >= 0 : #Outer if block
 if data == 0: #inner if block
  print("zero")
 else:         #inner else block 
  print("positive")
else:          #Outer else block
 print("Negative")