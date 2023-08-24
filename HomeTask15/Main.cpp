//HomeTask 15
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::cout << "Task\t\t\t\t\t\t\t\t\t\tTask 15.1\n";
	const int rows = 10;
	const int cols = 10;
	int matrix[rows][cols]{};
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 100;
			std::cout << matrix[i][j] << '\t';
			sum += matrix[i][j];
		}
		std::cout << "SUM = " << sum << std::endl;
		sum = 0;
		std::cout << std::endl;
	}
	std::cout << "\nTask 15.2\n";
	int n;
	std::cout << "Enter number from 0 to 9 -> ";
	std::cin >> n;
	while (n >= 10 || n < 0) {
		std::cout << "Incorrect input!\nEnter number from 0 to 9 -> ";
		std::cin >> n;
	}
	for (int i = 0; i < rows; i++) {
		matrix[i][n] = rand() % 100;
		std::cout << matrix[i][n] << '\t';
	}
	std::cout << std::endl;

		return 0;
	
}
