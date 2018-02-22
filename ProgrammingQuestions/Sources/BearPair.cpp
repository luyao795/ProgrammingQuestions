#include "QuestionSet.h"
#include "TestSet.h"

//	Source: https://community.topcoder.com/stat?c=problem_statement&pm=14130

//	Problem Statement
//
//	Bear Limak loves algorithms, especially the ones with words and strings.
//
//	Limak's friend recently entered a programming competition and wrote a program.
//	The program contains a string constant s. Limak would now like to challenge the program by making it exceed the time limit.
//	To do that, he must find two different characters in s that are as far apart as possible.
//
//	Formally, Limak must find two integers i and j with the following properties:
//
//	Both i and j must be valid indices into s. That is, both numbers must be between 0 and n - 1, inclusive, where n is the length of s.
//	The characters s[i] and s[j] must be different.
//	The difference between i and j must be as large as possible.
//
//	You are given the String s. If Limak cannot choose any integers with the required properties, return -1.
//	Otherwise, return the largest possible difference between i and j.
//
//
//	Definition
//
//	Class : BearPair
//	Method : bigDistance
//	Parameters : String
//	Returns : int
//	Method signature : int bigDistance(String s)
//	(be sure your method is public)
//
//
//	Constraints
//	- s will have between 2 and 50 characters, inclusive.
//	- Each character in s will be a lowercase English letter('a' - 'z').
int QuestionSet::BearPair::LargestDistance(std::string input)
{
	// Default result to be false
	int result = -1;
	// Case counter for different strategies for reducing search length
	int caseCount = 0;
	size_t length = input.size();
	// The search will not be possible if the string is shorter than 2 characters
	if (length < 2)
		result = -1;
	else
	{
		// Start searching from both ends
		size_t left = 0, right = length - 1;
		// We keep searching until two iterators intersect
		while (right > left)
		{
			// If current two characters are different, then we found the max distance
			if (input.at(right) != input.at(left))
			{
				result = right - left;
				break;
			}
			// Otherwise, we will use different strategies to reduce search length
			else
			{
				// First we only increment left iterator to use the next character of left compare to right
				if (caseCount == 0)
				{
					left++;
				}
				// Then we revert left iterator back and increment right iterator to use the previous character of right compare to left
				else if (caseCount == 1)
				{
					left--;
					right--;
				}
				// Finally we increment left iterator again to compare the next character of left and the previous character of right
				else
				{
					left++;
				}
				// Make sure all 3 cases get checked every time
				(caseCount += 1) %= 3;
			}
		}
	}
	return result;
}

// Test Cases for LargestDistance() function
void TestSet::BearPair::LargestDistance_Test()
{
	// Test Case 1
	// Expected Output: 3
	// Actual Output:	3
	//std::string original = "bear";

	// Test Case 2
	// Expected Output: 3
	// Actual Output:	3
	//std::string original = "abcba";

	// Test Case 3
	// Expected Output: 13
	// Actual Output:	13
	//std::string original = "oooohyeahpotato";

	// Test Case 4
	// Expected Output: -1
	// Actual Output:	-1
	//std::string original = "zzzzzzzzzzzzzzzzzzzzz";

	// Test Case 5
	// Expected Output: 1
	// Actual Output:	1
	//std::string original = "qw";

	// Test Case 6
	// Expected Output: 46
	// Actual Output:	46
	std::string original = "xxyyxyxyyyyyyxxxyxyxxxyxyxyyyyyxxxxxxyyyyyyyyxxxxx";

	printf("%d\n", QuestionSet::BearPair::LargestDistance(original));
}