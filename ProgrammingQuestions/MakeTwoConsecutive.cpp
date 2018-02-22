#include "QuestionSet.h"
#include "TestSet.h"
#include <iostream>

//	Source: https://community.topcoder.com/stat?c=problem_statement&pm=14783

//	Problem Statement
//
//	Definition: a string is beautiful if it has two consecutive equal characters.
//	Examples of beautiful strings are "KEEP", "ZZZZZ" and "TTORR", while the following
//	are not beautiful: "A", "GH" and "ABCABCBX".
//
//	You are given the String S and you are going to remove exactly one character from S.
//	Is it possible that the new string will be beautiful? If yes, return "Possible".
//	Otherwise, return "Impossible".
//
//	Note that the return value is case-sensitive.
//
//
//	Definition
//
//	Class : MakeTwoConsecutive
//	Method : solve
//	Parameters : String
//	Returns : String
//	Method signature : String solve(String S)
//	(be sure your method is public)
//
//
//	Constraints
//	- S will contain between 1 and 50 characters, inclusive.
//	- Each character in S will be an uppercase English letter : 'A' - 'Z'.
std::string QuestionSet::MakeTwoConsecutive::MakeConsecutiveString(std::string original)
{
	bool result = false;
	if (original.size() >= 3)
	{
		for (size_t i = 0; i < original.size() - 1; i++)
		{
			if (original.at(i) == original.at(i + 1))
			{
				result = true;
				break;
			}
		}
		if (!result)
		{
			for (size_t i = 1; i < original.size() - 1; i++)
			{
				if (original.at(i - 1) == original.at(i + 1))
				{
					result = true;
					break;
				}
			}
		}
	}
	return result == true ? std::string("Possible") : std::string("Impossible");
}

// Test Cases for MakeConsecutiveString() function
void TestSet::MakeTwoConsecutive::MakeTwoConsecutive_Test()
{
	// Test Case 1
	// Expected Output: Possible
	// Actual Output: Possible
	//std::string original = "VIKING";

	// Test Case 2
	// Expected Output: Impossible
	// Actual Output: Impossible
	//std::string original = "BCAB";

	// Test Case 3
	// Expected Output: Impossible
	// Actual Output: Impossible
	//std::string original = "XX";

	// Test Case 4
	// Expected Output: Impossible
	// Actual Output: Impossible
	//std::string original = "A";

	// Test Case 5
	// Expected Output: Possible
	// Actual Output: Possible
	//std::string original = "AABB";

	// Test Case 6
	// Expected Output: Possible
	// Actual Output: Possible
	//std::string original = "QWERTYY";

	// Test Case 7
	// Expected Output: Impossible
	// Actual Output: Impossible
	//std::string original = "ITHINKYOUAREAHUMAN";

	// Test Case 8
	// Expected Output: Possible
	// Actual Output: Possible
	std::string original = "BOB";

	std::cout << QuestionSet::MakeTwoConsecutive::MakeConsecutiveString(original) << std::endl;
}