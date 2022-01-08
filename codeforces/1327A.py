"""
You are given two integers n and k. Your task is to find if n can be represented as a sum of k distinct positive odd (not divisible by 2) integers or not.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤105) — the number of test cases.

The next t lines describe test cases. The only line of the test case contains two integers n and k (1≤n,k≤107).

Output
For each test case, print the answer — "YES" (without quotes) if n can be represented as a sum of k distinct positive odd (not divisible by 2) integers and "NO" otherwise.
"""

num_cases = int(input())

for i in range(num_cases):
    n, k = map(int, input().split())
    if n % 2 == 0 and k % 2 != 0: 
        print("NO")
    elif n % 2 != 0 and k % 2 == 0:
        print("NO")
    elif k**2 > n:
        print("NO")
    else:
        print("YES")


    