with open("/Users/evan/Programming/AdventOfCode/2021/Day1/input.txt",'r') as f:
	lines = f.readlines()

counter = 0

for index in range(len(lines)):
	if lines[index] > lines[index-1] and index > 0:
		counter += 1 

print(counter)
