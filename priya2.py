import math

a=input("enter the number:")
s=a.split(",")
n=len(s)
sum=0
for i in s:
    i=float(i)
    sum+=(i*i)
avg=sum/n
root=math.sqrt(avg)
print(root)
    
  
    
    
