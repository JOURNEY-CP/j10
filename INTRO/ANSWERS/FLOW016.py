# cook your dish here
import math
t=int(input())
while t>0:
    t-=1
    n,a=input().split()
    n,a=int(n),int(a)
    print(math.gcd(n,a),int(n*a/math.gcd(a,n)),sep=" ")