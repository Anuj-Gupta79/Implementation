x=int(input("Enter the value "))
if x>1:
    for n in range(2,x):
        if x%n==0:
            print(x,"is not prime number")
            break
    else:
        print(x,"is a prime number")
else:
    print(x,"is not prime number")