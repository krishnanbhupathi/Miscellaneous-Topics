# value - 3,5 both are divisors then OUTPUT : FizzBuzz
# value - 3 is only divisor OUTPUT : Fizz
# value - 5 is only divisor OUTPUT : Buzz
# value - 3,5 both are not divisors then print number

# Taking the input from user
data = int(input("Enter the input value:"))

if data%3 == 0:
 if data%5 == 0:
  print("FizzBuzz")
 else:
  print("Fizz")
elif data%5 == 0:
 print("Buzz")
else:
 print(data)