# Advent of Code 2016 Day 03 Squares with Three Sides

# take file input03.txt and analyse each string, a valid triangle is one where
# "the sum of any two sides is greater than the third side"

#which libraries should I include?



#https://github.com/JIghtuse/adventofcode-solutions/blob/master/2016/day03/solution.py
#I understand this one better

#split each number in the rows and turn them into integers
def read_data(fname):
    data = []
    for line in open(fname).readlines():
        a, b, c = line.split()
        data.append((int(a), int(b), int(c)))
    return data

lines = list(open(fname).readlines())

#need to call the possible triangles something side [] is invalid, ditch side []

# number of possible triangles
accum = 0 
def validTri (read_data):
    data = read_data("input03.txt")

    if int[a] + int[b] > int[b] and int[b] + int [c] > int[a] and int[a] + int [c] > int[b] :
        return (accum + 1 , line +1)
    else return (accum, line + 1)


print ("Number of valid triangles:")
print validTri