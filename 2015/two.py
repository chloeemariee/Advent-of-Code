# Advent of Code 2015 day 01 
# PART TWO 

#puzzle file name = input01.txt

#https://github.com/ChrisPenner/Advent-Of-Code-Polyglot/blob/master/2015/python/01/part2.py
#a way to fix my original if version

#Setting the scene becuase now we need to keep track
floor = 0 
position = 1

#The Count
with open ("input01.txt") as f: # the 'with' means I don't need to close
    for position, char in enumerate(f.read(), 1):
        if char == "(":
            floor += 1 
        elif char == ")" :
            floor -= 1 
        if floor == -1:
            break;

print ("It took you long enough", position)
