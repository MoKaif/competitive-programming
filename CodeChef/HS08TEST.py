x,y = (input().split(" "))
w,b=int(x),float(y)

if w > b or w % 5 != 0:
    print("{:.2f}".format(b))
else:
    bal=b-w-0.50
    print("{:.2f}".format(bal))


