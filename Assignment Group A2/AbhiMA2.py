# Write a Python program to store marks scored in subject “Fundamental of Data 
# Structure” by N students in the class. Write functions to compute following:
# a) The average score of class 
# b) Highest score and lowest score of class 
# c) Count of students who were absent for the test
# d) Display mark with highest frequency





#Program for accepting marks
def accept(A):
 n=int(input("enter number of students"))
 for i in range(n):
  while True:
   a=input("Enter marks of student in FDS subject of %d:"% (i+1))
   if (a=="AB"):
       a=-1
       break
   a=int(a)
   if (a>=0 and a<=30):
       break
   else:
       print("Enter marks between 0 and 30")
  A.append(a)
  print("Marks entered succssfully")

#Program for displaying marks
def display(A):
  for i in range(len(A)):
   if (A[i]==-1):
    print("Student : AB")
   else:
    print("\nStudent  :",A[i])
    
#Program for searching marks of student
def search_marks(A):
  a=int(input("Enter the roll number of student whose marks you want :"))
  for i in range(len(A)):
    if ((i+1)==a):
      print("Marks of student is ",A[i])
      
#Program for average marks of student
def average_score(A):
 sum=0
 for i in range(len(A)):
   if (A[i]!=-1):
      sum=sum+A[i]
 avg=sum/len(A)
 print("Average marks of students in the class is ",avg)
 
#Program for counting number of absent students
def absent(A):
 h=0
 for i in range(len(A)):
  if (A[i]==-1):
   h=h+1
 print("Number of absent students are ",h)
 
#Program for highest and lowest score
def high_low(A):
 hl=None
 for i in A:
  if hl is None or i>hl:
   hl=i
 print("Highest marks in the class is %d "%(hl))
 l=None
 for i in range(len(A)):
  if l is None or A[i]<l:
    l=A[i]
 print("Lowest marks in the class is %d "%l)
 
#Program for highest frequency of students
def marks_freq(A):
 f=0
 m=int()
 for i in range(len(A)):
  c=0
  if A[i]!=-1:
   for j in range(len(A)):
     if (A[i]==A[j]):
      c=c+1
   if f<c:
     m=A[i]
     f=c
 print("Marks with highest frequency is %d and %d students has it"%(m,f))
 
#Program for asking choice
def choice():
 while True:
  FDS=[]
  print("Enter choice number as you want as per the Menu")
  print("   Menu    \n")
  print("Enter 1 for accepting the marks\n")
  print("Enter 2 for displaying the marks\n")
  print("Enter 3 for searching the marks\n")
  print("Enter 4 for knowing the average marks of the class\n")
  print("Enter 5 for knowing the absent students during the exam\n")
  print("Enter 6 for knowing highest and lowest marks\n")
  print("Enter 7 for knowing highest frequency of marks\n")
  o=int(input("Please enter choice number"))
  if (o==1):
   accept(FDS)
  elif (o==2):
   accept(FDS)
   display(FDS)
  elif (o==3):
   accept(FDS)
   search_marks(FDS)
  elif (o==4):
   accept(FDS)
   average_score(FDS)
  elif (o==5):
   accept(FDS)
   absent(FDS)
  elif (o==6):
   accept(FDS)
   high_low(FDS)
  elif (o==7):
   accept(FDS)
   marks_freq(FDS)
  else:
   print("Please enter valid choice")
   
choice()
   
      
  
