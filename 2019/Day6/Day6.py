

with open("input.txt") as f:
    for line in f:
    orbits = [line.rstrip()] #https://www.reddit.com/r/adventofcode/comments/e6tyva/2019_day_6_solutions/f9wefu1/
    planet = orbit.split(")")[0]
    satellite = orbit.split(")")[1]


#can't i create a set of all the objects in space...? all the unique ones are the number of connections...cheating but will work