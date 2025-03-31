import range 

r1 = range.Range_Create(5,10)
r2 = range.Range_Create(7,9)
r3 = range.Range_Create(12,18)


print(range.Range_Overlaps(r1,r2)) # true or 1
print(range.Range_Overlaps(r1,r3)) # false or 0