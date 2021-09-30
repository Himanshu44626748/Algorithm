# Assigning list to variable numberList
number_list = [1, 12, 44, 21, 64, 28, 87, 45, 34, 63]

#---------------------------LINEAR SEARCH--------------------------------------------#
# function for linear search
def linear_search(x):
	for i, num in enumerate(number_list):
		if (num == x):
			return i
	return -1

print("Array is", number_list)
x = int(input("Enter element to search - "))
#calling function
index = linear_search(x)

if (index != -1):
	print('Element found at index', str(index))
else:
	print('Element is not present in the array')
