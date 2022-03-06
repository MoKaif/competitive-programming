len =int(input())
list1 = list(map(int,input().split()))

list1.sort(reverse=True)
for x in list1:
    print(x, end=" ")