# Write a Python program to store first year percentage of students in array. Write 
# function for sorting array of floating point numbers in ascending order using 
# a) Selection Sort 
# b) Bubble sort and display top five scores.

A=[]
def accept(A):
    n=int(input("Enter number of students : "))
    for i in range(n):
        a=int(input("Enter the percentage of student : "))
        A.append(a)
    print("Marks accepted successfully")
def Selection_Sort(A):
    for i in range(len(A)):
        m = i
        for j in range(i + 1, len(A)):
            if A[m] > A[j]:
                m = j
        A[i], A[m] = A[m], A[i]
    print(A)

def Bubble_Sort(A):
    n = len(A)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if A[j] > A[j + 1]:
               A[j], A[j + 1]=A[j + 1], A[j]
    print(A)
    
def Main(A):
 while True:
    print("\n----------------------------MENU------------------------------")
    print("\nEnter 1: To accept perecntage marks ")
    print("\nEnter 2: Selection Sort of the marks")
    print("\nEnter 3: Bubble Sort of the marks and display of top 5 scores")
    ch=int(input("\n\nEnter your choice : "))
    if ch==1:
       accept(A)
    elif ch==2:
       Selection_Sort(A)
    elif ch==3:
       Bubble_Sort(A)
       print("\nTop 5 sores are :")
       print(A[-5:])
    else:
        print("\nInvalid choice")
Main(A)
       
