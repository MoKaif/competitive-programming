num = int(input())
list=[num]
i=1
while num%i<=1:
    list.append(i)
    i+=1
    

list.sort()
print(len(list))
for i in range(0,len(list)):
    print(list[i] ,end=" "