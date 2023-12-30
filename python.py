def isPalindrome(str):
	rev = str [::-1]
	if(rev == str):
		return True
	else:
		return False

str = input()
print(isPalindrome(str))
