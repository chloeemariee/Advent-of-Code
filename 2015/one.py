# Advent of Code 2015 day 01
#open ( means go up close ) means go down

#puzzle file name = input01.txt

#https://github.com/jjhelmus/adventofcode/blob/master/day01.py simple but understandable, I hope...

open ("input01.txt")
    directions = f.read()
    floor = directions.count( "(" ) - directions.count( ")" )

print("Go to floor:", floor)