#include <iostream>
#include <fstream>
#include <vector>


int part1() {

	FILE *filepointer;
	
	filepointer = fopen("/Users/evan/Programming/AdventOfCode/2021/Day1/test_input.txt", "r");

	char myString[100];
	char line[2][sizeof(myString)];

	int current = 0;
	int previous = -1;

	int depth_counter = 0;
	
	int prev_number;
	int curr_number;

	if (filepointer == NULL) {
		
		printf("Error opening file!\n");
		
		return 1;
	} else {
		
		// Read the content and print it

		while(fgets(line[current], sizeof(myString), filepointer) != NULL) {
			

			sscanf(line[current], "%d", &curr_number);
			sscanf(line[previous], "%d", &prev_number);
			printf("line[%d]: %s\t->%s", current, line[previous], line[current]);
			if ( previous != -1 && curr_number > prev_number) {
				//printf("%.3s -> %.3s increased\n", line[previous], line[current]);
				depth_counter++;
			} 
			//if (previous >= 0){
			//	printf("%.3s -> %.3s\n", line[previous], line[current]);
			//}

			previous = current;
			current = 1 - current; 

		}
	}

	fclose(filepointer);

	return depth_counter;
}

int part2() {

	FILE *filepointer;
	
	filepointer = fopen("/Users/evan/Programming/AdventOfCode/2021/Day1/test_input.txt", "r");

	char myString[100];
	char line[4][sizeof(myString)];

	int index_counter = 0;

	int depth_counter = 0;

	if (filepointer == NULL) {
		
		printf("Error opening file!\n");
		
		return 1;
	} else {
		
		// Read the content and print it
		while(fgets(line[index_counter], sizeof(myString), filepointer) != NULL) {
			
			int a, b, c, d;
			int red, green, blue;
			int first_window, second_window;

			//index_counter is updated after this
			if ( index_counter >= 3) {

				printf("line[%d]:\n%s%s%s%s", index_counter, line[index_counter-3], line[index_counter-2], line[index_counter-1], line[index_counter]);
				
				sscanf(line[index_counter-3], "%d", &a);
				sscanf(line[index_counter-2], "%d", &b);
				sscanf(line[index_counter-1], "%d", &c);
				sscanf(line[index_counter], "%d", &d);
				first_window = a + b + c;
				second_window = b + c + d;

				if (second_window > first_window){
					depth_counter++;
				}
			} 
			index_counter = (index_counter + 1) % 4;
		}
	}
	printf("Depth increased [[ %d ]] times\n", depth_counter);
	fclose(filepointer);

	return depth_counter;
}

int main() {
	
	int depth = part2();
	printf("Part 2: Depth increased [[ %d ]] times\n", depth);
	return 0;
}