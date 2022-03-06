def array_sum(n):
    """
    Gets input from list and returns sum of the contents as `int`

    Args:
        n ([int]): [the list with numbers]

    Returns:
        [int]: [Sum of the elements of list]
    """
    sum=0
    for item in n:
        sum = sum + item

    return sum 

n=[]
v=int(input("enter The length of List: )
seq = input("Enter the list: ")
p=seq.split(" ")
for item in range(0,v):
    n.append(int(p[item]))

print(array_sum(n))


#  score 10.0