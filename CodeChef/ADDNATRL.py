try:
    def sumrec(n):
        if n>=1:
            return n+sumrec(n-1)
        else:
            return 0

    n=int(input())
    sum = sumrec(n)
    print(sum)

except:
    pass