'''
Work in progress
'''
import re

if __name__ == '__main__':
    nr_cases = int(input())
    
    outstrs = []
    for i in range(nr_cases):
        outstrs.append(re.split('(\*|\+|-)', input()))

    for s in outstrs:
        num1, num2 = int(s[0]), int(s[2])
        if s[1] == '+':

