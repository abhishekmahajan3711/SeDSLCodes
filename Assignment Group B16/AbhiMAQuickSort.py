# Write a Python program to store first year percentage of students in array. Write 
# function for sorting array of floating point numbers in ascending order using quick sort 
# and display top five scores.


A=[]
def accept(A):
    n=int(input("Enter number of students in the class : "))
    for i in range(n):
        a=float(input("Enter the percentage of student : "))
        a=a/100
        A.append(a)

def partition(A,i,j):
 n=len(A)
 i=1
 j=n-1
 pivot=0
 while(i<j):
    while(i<n-1 and A[i]<A[pivot]):
        i+=1
    while(A[j]>A[pivot]):
        j-=1
    temp=A[i]
    A[i]=A[j]
    A[j]=temp
 temp=A[pivot]
 A[pivot]=A[j]
 A[j]=temp
 return j

def quick_sort(A,i,j):
    if(i<j):
     p=partition(A,i,j)
     quick_sort(A,i,p-1)
     quick_sort(A,p+1,j)
    
    
def Main(A):
    while True:
        print("\t\t********Main Menu**********")
        print("\nEnter 1 : To accept the percentage of students")
        print("\nEnter 2 : To display first top 5 scores using quick sort")
        b=int(input("Enter your choice : "))
        print("\n")
        if(b==1):
            accept(A)
        elif(b==2):
            n=len(A)
            quick_sort(A,0,n)
            for i in range(n):
             A[i]=A[i]*100
            print("Top 5 scores are ", (A[-5:]))
        else:
            print("Invalid choice")


Main(A)


    
    