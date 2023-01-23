# Linear Search
<!- def linearsearch(arr, x):
      for i in range(len(arr)):
         if arr[i] == x:
           return i
      return -1
    arr = [1,2,3,4,5,6,7,8,9]
    x = 6
    print(f" element {x} found at index {linearsearch(arr,x)}")
 -->
 
 # Binary Search
 def binary_search(arr,x):
    low=0
    high=len(arr)-1
    while high>=low:
        mid=(low+high)//2
        if arr[mid]==x:
            return mid
        elif x > arr[mid] :
            low=mid+1
        else:
            high=mid-1
    return -1
    
arr=[10,20,30,40,50,80,90]
x=30
print(f" element {x} found at index {binary_search(arr,x)}")

# Tower Of Hanoi
def tower_hanoi(n,source ,auxillary,destination):
    if n>0:
        tower_hanoi(n-1,source,destination,auxillary)
        print(f"move disk {n} from {source} to {destination}")
        tower_hanoi(n-1,auxillary,source,destination)
tower_hanoi(3,'A','B','C')        
    


