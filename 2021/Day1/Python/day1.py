with open("/Users/evan/Programming/AdventOfCode/2021/Day1/input.txt",'r') as f:
	lines = f.readlines()

def part_1():
	counter = 0
	for index in range(len(lines)):
		if int(lines[index]) > int(lines[index-1]) and index > 0:
			counter += 1
			#print(lines[index-1].strip(), index-1, lines[index].strip(), index, "increased")
		else:
			#print(lines[index-1].strip(), index-1, lines[index].strip(), index, "decrease or no change")
			pass 
	print(f"Part 1: {counter}")

def part_2():
	counter_2=0
	for index in range(len(lines)):
		if index > 2:
			first_window = lines[index-1] + lines[index-2] + lines[index-3]
			second_window = lines[index] + lines[index-1] + lines[index-2]
			if second_window > first_window:
				counter_2+=1
	print(f"Part 2: {counter_2}")
	return 0

def main():
	part_1()
	part_2()
	return 0

if __name__ == "__main__":
	main()