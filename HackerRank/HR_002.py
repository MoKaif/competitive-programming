def compare_triplets(a,b):
    result=[]
    for item in range(0,4):
        if a[item] > b[item]:
            result[0] += 1
        elif a[item] < b[item]:
            result[1] += 1
        else:
            continue
    return result


q=[]
p=[]
for i in range (0,4):
    q.append(int(input(i)))
ans=compare_triplets(q,p)
print(ans)            

