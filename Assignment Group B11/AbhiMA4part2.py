# b) Write a Python program to store roll numbers of student array who attended training 
# program in sorted order. Write function for searching whether particular student 
# attended training program or not, using Binary search and Fibonacci search




#Assignment 4 part b
A=[]
def accept(A):
    n=int(input("Enter number of elements in the array : "))
    for i in range(n):
     a=int(input("Enter the number: "))
     A.append(a)
     
def binary_search(A):
    key=int(input("Enter the number which you want to search : "))
    low=0
    high=len(A)-1
    while(low<=high):
        mid=(low+high)//2
        if (key<A[mid]):
            high=mid-1
        elif(key>A[mid]):
            low=mid+1
        elif(key==A[mid]):
            return mid
    return -1

def fibonacci(A):
    n=len(A)
    x=int(input("Enter the number which you want to search : "))
    f1=0
    f2=1
    f3=f1+f2
    offset=-1
    while (f3<n):
        f1=f2
        f2=f3
        f3=f1+f2
    while (f3>1):
        i=min(offset+f1,n-1)
        if(A[i]==x):
            return i
        else:
            if(x<A[i]):
                f3=f1
                f2=f2-f1
                f1=f3-f2
            else:
                f3=f2
                f2=f1
                f1=f3-f2
                offset=i
    if (f2==1 and (offset+1<n) and A[offset+1]==x):
        return offset+1
    return -1

def Main():
 while True:
    print("*************************Main Menu***************************")
    print("\tEnter 1:To accept the roll numbers")
    print("\tEnter 2:To search the roll number using binary search ")
    print("\tEnter 3:To search the roll number using fibonacci search ")
    a=int(input("Enter your choice : "))
    if (a==1):
     accept(A)
    elif (a==2):
     #accept(A)
     b=binary_search(A)
     if (b!=-1):
        print("Roll number was present")
     else:
        print("Roll number was absent")
    elif (a==3):
     #accept(A)
     a=fibonacci(A)
     if (a==-1):
        print("Roll number was absent")
     else:
        print("Roll number was present")
    else:
        print("Invalid choice !!!!")
Main()



