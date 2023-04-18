#Q1
n = float(input("Please enter value of n "))
x = int(input("Please enter the value of x "))

fac = lambda a: 1 if a == 0 else a * fac(a-1)

func = lambda n, a: (n ** a) / fac(a)


func2 = [func(n, a) for a in range(x + 1)]

result = sum(func2)

print(result)

#Q2
def sum_function(n,k=1,sum=0):
    if k>n:
        print(sum)
        return 0

    sumfunc = ((-1) ** k + 1)/k
    sum_function(n, k + 1, sum + sumfunc)
    """
        this function calculates the result of given sum series using recursion
        it takes 'n' as the parameter and updates the 'sum' value  without returning a value

        Parameters:
        n: The limit of the summation
        k: The current value of k 
        sum: The sum of the series up to k-1   
    """


t = int(input("Pleaese enter value of t: "))

sum_function(t)
