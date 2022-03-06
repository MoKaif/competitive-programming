a,b = map(int,input().split(" "))
list=[]
for i in range(a,b+1):
    if i%2!=0:
        list.append(i)

for i in range(0,len(list)):
    print(list[i], end=" ")
