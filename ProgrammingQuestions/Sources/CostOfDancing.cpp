#include "QuestionSet.h"
#include "TestSet.h"
#include <algorithm>

int QuestionSet::CostOfDancing::MinimumCost(int numberOfDances, std::vector<int> listOfCosts)
{
	// Sort the list of costs in ascending order
	std::sort(listOfCosts.begin(), listOfCosts.end());
	// Initialize the total cost
	int totalCost = 0;
	// Choose the first kth costs for the input k = numberOfDances
	for (size_t i = 0; i < numberOfDances; i++)
	{
		totalCost += listOfCosts.at(i);
	}
	// Return the minimum total cost
	return totalCost;
}

// Test Cases for MinimumCost() function
void TestSet::CostOfDancing::MinimumCost_Test()
{
	// Test Case 1
	// Expected Output: 2
	// Actual Output:	2
	//int numberOfCosts = 2;
	//std::vector<int> listOfCosts = { 1, 5, 3, 4 };

	// Test Case 2
	// Expected Output: 10
	// Actual Output:	10
	//int numberOfCosts = 3;
	//std::vector<int> listOfCosts = { 1, 5, 4 };

	// Test Case 3
	// Expected Output: 2
	// Actual Output:	2
	//int numberOfCosts = 1;
	//std::vector<int> listOfCosts = { 2, 2, 4, 5, 3 };

	// Test Case 4
	// Expected Output: 20431
	// Actual Output:	20431
	int numberOfCosts = 39;
	std::vector<int> listOfCosts = { 973, 793, 722, 573, 521, 568, 845, 674, 595, 310, 284, 794, 913, 93, 129, 758, 108, 433, 181, 163, 96, 932,
		703, 989, 884, 420, 615, 991, 364, 657, 421, 336, 801, 142, 908, 321, 709, 752, 346, 656, 413, 629, 801 };

	std::cout << "Minimum cost for learning " << numberOfCosts << ((numberOfCosts == 1) ? " dance: " : " dances: ") << QuestionSet::CostOfDancing::MinimumCost(numberOfCosts, listOfCosts) << "." << std::endl;
}