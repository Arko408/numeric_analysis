traditional approach :
Here it searches the interval [0,10] as it assumes that the root is between in the range. It works without checking the sign of the function equation(0) and equation(10). Then it calls the ans function to get the root between the range.
If equation(0) and equation(10) has same sign it will return -1 saying that such no root exists. It is a very simple and direct approach. But it is not safe for all fucntions of equation. If equation(0) and equation(10)
don't have opposite signs then this approach will not work.And it may fail or return wrong answer if the given interval does not contain the root.

Better approach :
Here it searches in the interval [0,10] in every 0.1 steps forward to find 2 points i and i+0.1 such that equation(i) and equation(i+0.1) have opposite signs. Once it finds the following 2 values it calls the ans function 
with those 2 values to check the root of the equation.It is more safe and reliable than the traditional approach as it automatic detects a valid interval of i and i+0.1 that contains the following root.
