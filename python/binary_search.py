### creating Sorted List for Binarty search using sort()
numberList=[1,12,44,21,64,28,87,45,34,63]
numberList.sort()
sortedList=numberList
#### function for Binary Search

def binarySearch(sortedList,low,high,x):
if high>=low:
mid=(high+low)//2
if sortedList[mid]==x:
return mid
elif sortedList[mid]>x:
return binarySearch(sortedList,low,mid-1,x)
else:
return binarySearch(sortedList, mid+1, high,x)
else:

5

return -1
x=int(input('enter element to search \n'))

#calling function

result=binarySearch(sortedList,0,len(sortedList)-1,x)
if (result != -1):
print('element found at index',str(result))
else:
print('element not present in LIST')
