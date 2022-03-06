len,k = map(int,input().split())
listed = list(map(int,input().split(" ")))
# print(listed)
l=0
u=len
while l<=u:
    mid = l+u//2
    if listed[mid]==k:
        print("1")
        break
    else:
        if listed[mid]>k:
            u=mid
        else:
            l=mid



