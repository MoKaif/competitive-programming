num = int(input())
list=[]
for i in range(1,num+1):
    if num % i == 0:
        list.append(i)
    
list.sort()
print(len(list))
for i in range(0,len(list)):
    print(list[i] ,end=" ")

