def isboth(a):
    if (a%5==0 and a%11==0):
        print("BOTH")
    elif (a%5==0 or a%11==0):
        print("ONE")
    elif (a%5!=0 or a%11!=0):
        print("NONE")
    


a = int(input())
isboth(a)