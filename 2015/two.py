# Advent of Code 2015 day 01 
# PART TWO 

#puzzle file name = input01.txt

#https://github.com/jjhelmus/adventofcode/blob/master/day01.py their part two is a  
#little confusing but the elements mesh so let's see what we can make of it

#Setting the scene becuase now we need to keep track
floor = 0 
position = 1

#The Count
with open ("input01.txt") as fo: # the 'with' means I don't need to close
    directions = fo.read()
    for position:
        floor += (1 if directions == "(" , position += 1 else -1 , position += 1)
        if floor < 0:
            print ("the position", position)
