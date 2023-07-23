# In second year computer engineering class, group A student’s play cricket, group B 
# students play badminton and group C students play football. 
# Write a Python program using functions to compute following: -
# a) List of students who play both cricket and badminton 
# b) List of students who play either cricket or badminton but not both 
# c) Number of students who play neither cricket nor badminton
# d) Number of students who play cricket and football but not badminton.
# (Note- While realizing the group, duplicate entries should be avoided, Do not use SET 
# built-in functions

def accept(A,B,C):  
 c=int(input("Enter number of students who play Cricket:"))
 for i in range(c):
    cn=int(input("Enter roll no. of student:"))
    A.append(cn)
    
 f=int(input("Enter number of students who play Football:"))
 for i in range(f):
    fn=int(input("Enter roll no. of students :"))
    C.append(fn)

 b=int(input("Enter number of students who play Badminton:"))
 for i in range(b):
    bn=int(input("Enter the roll no. of students :"))
    B.append(bn)
#Displaying user taken input
def display(A,B,C):
    print("List of students in Class Who play Cricket:",A)
    print("List of students in Class Who play Badminton:",B)
    print("List of students in Class Who play Football",C)
    
#union of two sets
def uni(A,B):
 U=[]
 for i in A:
    U.append(i)
 for i in B:
    if i not in A:
        U.append(i)
 return U

#intersection of two sets
def intersection(A,B):
    D=[]
    for i in range(len(A)):
        for j in range(len(B)):
            if (A[i]==B[j]):
                D.append(A[i])
    return D

#difference of sets
def diff(A,B):
 D=[]
 for i in A:
    if i not in B:
        D.append(i)
 return D

#students who play both cricket and badminton
def c_and_b(A,B):
    a=intersection(A,B)
    print("Students who play both cricket and badminton are ",a)



#students who play either cricket or badminton but not both 
def c_and_b_not_b(A,B):
  a=uni(A,B)
  b=intersection(A,B)
  E=[]
  for i in a:
    if ((i not in b) and (i not in E)):
        E.append(i)
  print("Students who play either cricket or badminton but not both are ",E)



#number of students who play neither cricket nor badminton
def ncrinorb(A,B,C):
    L=[]
    b=intersection(A,C)
    c=intersection(B,C)
    for i in C:
        if ((i not in b) and (i not in c)):
            L.append(i)
    print("Number of students who play neither cricket nor badminton are ",len(L))

#number of students who play cricket and football but not badminton
def criandfoot(A,B,C):
    a=uni(A,C)
    for i in a:
        if (i in B):
            a.remove(i)
    print("Number of students who play cricket and football but not badminton are ",len(a))
    
def main():
 A=[]
 B=[]
 C=[]
 while True:
        print("Enter 1:Accept and Display names of students")
        print("Enter 2:List of students who play both cricket and badminton")
        print("Enter 3:List of students who plays either cricket or badminton but not both")
        print("Enter 4:Number of students who play neither cricket nor badminton")
        print("Enter 5:Number of students who play cricket and football but not badminton")
        print("Enter 6:Exit")
        ch=int(input("Enter your choice: "))
        if(ch==6):
            print("End of program")
        elif (ch==1):
            accept(A,B,C)
            display(A,B,C)
        elif (ch==2):
            accept(A,B,C)
            candb(A,B) 
        elif (ch==3):
            accept(A,B,C)
            candbnotb(A,B)
        elif (ch==4):
            accept(A,B,C)
            ncrinorb(A,B,C)
        elif (ch==5):
            accept(A,B,C)
            criandfoot(A,B,C)
        else:
            print("Invalid choice.Enter a valid choice")
main()
