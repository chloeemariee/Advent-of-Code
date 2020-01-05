# Advent of Code 2019 Day 6
# Universal Orbit Map

import sys

# for direct orbits

# file IO
with open("input.txt") as f:
    for line in f:
    orbits = [line.rstrip()] #https://www.reddit.com/r/adventofcode/comments/e6tyva/2019_day_6_solutions/f9wefu1/
    planet = orbit.split(")")[0]
    satellite = orbit.split(")")[1]

# make a tree. How do you make a tree? build?? https://pastebin.com/68HG0LKW
def findOrbits(orbitArray, world, count):
    for i in orbitArray:
       
        localCount = count
        endCheck = i[0]
        worldCheck = i[1]
       
        if(worldCheck==world):
            if(endCheck!="COM"):
                localCount += 1
                returnValue = findOrbits(orbitArray,endCheck,localCount)
            else:
                localCount +=1
                returnValue = localCount
               
    return returnValue 

# count direct and indirect orbits https://pastebin.com/68HG0LKW
for count in orbits:
    number = findOrbits(orbits, count, 0)
    orbitCount += number

# does this work?
print(total_orbits)
