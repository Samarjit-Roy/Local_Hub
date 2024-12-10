from tabulate import *

for i in range(2):
    name=input("ENter the name=")
    age=int(input("ENter the age="))
    job=input("ENter the job=")
    table=(name,age,job)
x=table
print(x)
'''table_data=[['name','age','job'],
            ['mike','22','Progammer'],
            ['Samarjit','17','Studing']]



for row in table_data:
    for col in row:
        print(col,end='\t')
    print()

print(tabulate(table_data))'''
