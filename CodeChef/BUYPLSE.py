def buy_please(a,b,x,y):
    return a*x + b*y


a,b,x,y = map(int, input().split())
print(buy_please(a,b,x,y))