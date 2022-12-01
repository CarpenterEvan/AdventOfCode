import pandas as pd
import os
this_folder = os.path.dirname(__file__)

total_calories_per_elf = []
with open(f"{this_folder}/input.txt", "r") as calories:
	what_each_elf_carries = calories.read().split("\n\n")
	for food in what_each_elf_carries:
		food_per_elf = list(map(int, food.split("\n")))
		total_calories_per_elf.append(sum(food_per_elf))
print(sorted(total_calories_per_elf))

## Part 2 ##
print(sorted(total_calories_per_elf)[-3:])
print(sum(sorted(total_calories_per_elf)[-3:]))