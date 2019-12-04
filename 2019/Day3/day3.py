
#https://raw.githubusercontent.com/qwertpi/advent-of-code-2019/master/3/python/a.py

with open("input.txt", "r") as f:
    wire_coordinates = [line.split(",") for line in f.read().splitlines()]

def plotting_points(path):
    central_port = [0, 0]
    points = []
    for path in path:
        if path[0] == "R":
            for i in range(0, int(path[1:])):
                curr_point = [curr_point[0]+1, curr_point[1]]
                points.append(tuple(curr_point))
        elif path[0] == "L":
            for i in range(0, int(path[1:])):
                curr_point = [curr_point[0]-1, curr_point[1]]
                points.append(tuple(curr_point))
        elif path[0] == "U":
            for i in range(0, int(path[1:])):
                curr_point = [curr_point[0], curr_point[1]+1]
                points.append(tuple(curr_point))
        elif path[0] == "D":
            for i in range(0, int(path[1:])):
                curr_point = [curr_point[0], curr_point[1]-1]
                points.append(tuple(curr_point))                                                                
    return points

def manhatten_distance(point_1, point_2):
    return abs(point_1[0] - point_2[0]) + abs(point_1[1] - point_2[1])

wires = []
for variable in plotting_points:
    wires.append(directions_to_points(plotting_points))

#cast to set to perform intersection operator to find common points
#cast to list for subscribabiltiy
#first element is ignored
common_points = list(set(wires[0]).intersection(set(wires[1])))

best_point = (0,0)
#you can never be too carefull
best_point_dist = float("inf")
for point in common_points:
    distance = manhatten_distance (point, (0,0))
    if dist <= best_point_dist:
        best_point_dist = dist
        best_point = point
        
print(best_point)
print(best_point_dist)


# pathfinder