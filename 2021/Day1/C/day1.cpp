#include <iostream>
#include <fstream>
#include <vector>







int main() {

	FILE *filepointer;
	
	filepointer = fopen("/Users/evan/Programming/AdventOfCode/2021/Day1/input.txt", "r");

	char myString[100];
	char line[2][sizeof(myString)];

	int current = 0;
	int previous = -1;

	int depth_counter = 0;

	if (filepointer == NULL) {
		
		printf("Error opening file!\n");
		
		return 1;
	} else {
		
		// Read the content and print it
		while(fgets(line[current], sizeof(myString), filepointer) != NULL) {
			
			int curr_number;
			int prev_number;

			sscanf(line[current], "%d", &curr_number);
			sscanf(line[previous], "%d", &prev_number);

			if ( previous >=0 and curr_number > prev_number) {
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
	printf("Depth increased [[ %d ]] times\n", depth_counter);
	fclose(filepointer);
	return 0;
}
