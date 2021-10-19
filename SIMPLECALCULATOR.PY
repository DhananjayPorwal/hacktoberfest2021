print ("hello welcome to my calculator")

def add(n1,n2):
    return n1+n2

def subtract(n1,n2):
    return n1-n2

def multiply(n1,n2):
    return n1*n2

def devide(n1,n2):
    return n1/n2

print('''select \n 1 for addition
      2 for subtraction
      3 for multiplication
      4 for division
      5 for quit ''')

while True:
    select =input("")

    if select == '5':
        break
    else:
        a=int(input("enter the 1st no"))
        b=int(input("enter the 2nd no"))
        print(a,b)

        if select=='1':
            print(add(a,b))
        elif select == '2' :
            print(subtract(a,b))
        elif select == '3':
            print(multiply(a,b))
        elif select == '4':
            print(devide(a,b))
        else:
            print("invalid input")
