# Write a Python program to store 12th class percentage of students in array. Write 
# function for sorting array of floating point numbers in ascending order using bucket sort 
# and display top five scores

A=[]
def accept(A):
    n=int(input("Enter number of students : "))
    for i in range(n):
        a=float(input("Enter the percentage of student : "))
        a=a/100
        A.append(a)

def display(A,n):
    for i in range(n):
        print(A[i])
        
def insertsort(buck):
 for i in range(1,len(buck)):
        a=buck[i]
        j=i-1
        while (j>=0 and a<buck[j]):
            buck[j+1]=buck[j]
            j=j-1
            buck[j+1]=a
 return buck      
def bucket(A):
    buck=[]
    n=len(A)
    for i in range(n):
        buck.append([])
    for j in range(n):
        index=int(n*A[j])
        buck[index].append(A[j])

    for i in range(n):
        buck[i]=insertsort(buck[i])
    b=0
    for m in range(n):
        for n in range(len(buck[m])):
            A[b]=buck[m][n]
            b=b+1
    return A

def Main(A):
    while True:
        print("\t\t********Main Menu**********")
        print("\nEnter 1 : To accept the percentage of students")
        print("\nEnter 2 : To display the percentage of students in floating points")
        print("\nEnter 3 : To perform bucket sort")
        print("\nEnter 4 : To display first top 5 scores")
        b=int(input("Enter your choice : "))
        print("\n")
        if(b==1):
            accept(A)
        elif(b==2):
            #accept(A)
            n=len(A)
            display(A,n)
        elif(b==3):
            print(bucket(A))
        elif(b==4):
            a=bucket(A)
            n=len(A)
            for i in range(n):
             A[i]=A[i]*100
            print("Top 5 scores are ", (A[-5:]))
        else:
            print("Invalid choice")


Main(A)
