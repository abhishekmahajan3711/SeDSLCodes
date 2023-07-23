# a) Write a Python program to store roll numbers of student in array who attended 
# training program in random order. Write function for searching whether particular 
# student attended training program or not, using Linear search and Sentinel search. 

#Assignment 4 part a
A=[]

def accept(A):
 n=int(input("Enter total number of students"))
 for i in range(n):
  a=int(input("Enter roll number of student: "))
  A.append(a)
  
def linear_search(A):
 a=int(input("Enter roll number which you want to search :"))
 c=0
 for i in range(len(A)):
  if (A[i]==a):
    c+=1
 if (c==1):
  print("Roll number was present")
 else:
  print("Roll number was absent")
  
def sentinel_search(A):
 n=len(A)
 key=int(input("Enter roll number which you want to search : "))
 a=A[n-1]
 A[n-1]=key
 i=0
 while(A[i]!=key):
   i+=1
 A[n-1]=a
 if ((A[n-1]==key) or (i<n-1)):
   print("Roll number was present ")
 else:
  print("Roll number was absent")

 
def Main(A):
 while True:
    print("*************************Main Menu***************************")
    print("\tEnter 1:To accept roll numbers")
    print("\tEnter 2:To search the roll number using linear search ")
    print("\tEnter 3:To search the roll number using sentinel search ")
    a=int(input("\nEnter your choice : "))
    if (a==1):
     accept(A)
    elif (a==2):
     #accept(A)
     linear_search(A)
    elif (a==3):
     #accept(A)
     sentinel_search(A)
    else:
        print("Invalid choice !!!!")

Main(A)

