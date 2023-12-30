def isPalindrome(str):
	if(reverse(str)== str):
		return True
	else:
		return False

str = input()
print(isPalindrome(str))
