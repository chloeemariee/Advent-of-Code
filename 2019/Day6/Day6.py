# Advent of Code 2019 Day 6
# Universal Orbit Map


# for direct orbits

# file IO
with open("input.txt") as f:
    for line in f:
    orbits = [line.rstrip()] #https://www.reddit.com/r/adventofcode/comments/e6tyva/2019_day_6_solutions/f9wefu1/
    planet = orbit.split(")")[0]
    satellite = orbit.split(")")[1]

# make a tree. How do you make a tree? build??
build tree 
    where planet = root
    and   satellite = branch
    reccur  

# count direct and indirect orbits
direct = pairs
indirect = run through the whole tree

total_orbits = direct + indirect

# does this work?
print(total_orbits)
