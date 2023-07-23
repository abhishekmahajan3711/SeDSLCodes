# Write a Python program to compute following operations on String:
# a) To display word with the longest length
# b) To determines the frequency of occurrence of particular character in the string
# c) To check whether given string is palindrome or not 
# d) To display index of first appearance of the substring
# e) To count the occurrences of each word in a given string




s=input("Enter the string:")
l=s.split()

#to display word with longest length
def longest_word():
 l=s.split()
 count=0
 for i in range(len(l)):
  b=len(l[i])
  if (b>count):
    count=b
    word=l[i]
 print("Longest word in the string is : ",word)
 
#to determine the frequency of occurence of particular character in the string
def freq_charac():
 g=input("Enter letter present in above line whose frequency you want ")
 c=0
 for i in range(len(s)):
  if (s[i]==g):
   c+=1
 print("Frequency of occurence of particular %s in the string is : %d"%(g,c))
 
#to check whether given string is plaindrome or not
def pali():
 b=""
 for i in range(len(s),0):
  b+=i
 if (s is b):
  print("Given string is palindrome")
 else:
  print("Given string is not palindrome")
  
#to display index of first appearance of the substring
def index_appearance():
 h=l[1]
 f=h.split()
 d=h[0]
 print("Index of first appearance of the substring is ",d)
 

 
#to count occurrences of each word in a given string
def occurence():
 d=dict()
 for i in l:
  if i in d:
   d[i]+=1
  else :
   d[i]=1
 print("Occurrences of each word in a given string are ")
 for i in d:
  print(i,d[i])
  

def Menu():
 while True:
  print("\t*******************Main menu**************************")
  print("\nEnter 1:To display word with longest length")
  print("\nEnter 2:To determine the frequency of occurence of particular character in the string")
  print("\nEnter 3:To check whether given string is plaindrome or not")
  print("\nEnter 4:To display index of first appearance of the substring")
  print("\nEnter 5:To count occurrences of each word in a given string")
  c=int(input("Enter the choice as per your wish :"))
  if (c==1):
   longest_word()
  elif (c==2):
   freq_charac()
  elif (c==3):
   pali()
  elif (c==4):
   index_appearance()
  elif (c==5):
   occurence()
  else:
   print("Invalid choice")
  print("\n")
  
Menu()
  
  
