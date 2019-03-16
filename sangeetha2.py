

rows = int(input("Enter the desired height: "))
arr=[];

for row in range(1 , rows + 1):
    arr.append(1)  

    for i in range(row - 2, 0, -1): 
        arr[i] += arr[i - 1] 
    print(arr)
   
