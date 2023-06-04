# def func1():
#     print("Printing tables:")
# def func2(a):
#     print("Table for ",a,":")
# def func3(a,b):
#     return a*b 
# def func4(a):
#     for i in range(1,11):
#         print(a,"X",i,"=",func3(a,i))
# func1()
# for i in range(2,21):
#     func2(i)
#     func4(i)

pie = 22/7 
def aoc_sm(r): 
   return pie*r**2 
def aoc_pm(r, pie=22/7): 
   return pie*r**2 
def aoc_rn(r):     
    aoc = pie*r**2     
    return aoc 
def aoc_rn_pm(r, pie=22/7): 
    aoc = pie*r**22     
    return aoc 
for r in range(1, 11):     
    radius = float(input(f"Enter the Radius {r}: "))     
    aoc = aoc_sm(radius)     
    print(f"Area of Circle with Radius {r} (Simple Function): {aoc}")     
    aoc = aoc_pm(radius)     
    print(f"Area of Circle with Radius {r} (Parameter Function): {aoc}")     
    aoc = aoc_rn(radius)     
    print(f"Area of Circle with Radius {r} (Return Function): {aoc}")     
    aoc = aoc_rn_pm(radius)     
    print(f"Area of Circle with Radius {r} (Return with Parameter Function): {aoc}")     
    print() 
