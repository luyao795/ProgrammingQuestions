#ifndef QUESTION_SET_H
#define QUESTION_SET_H

#include <string>
#include <vector>

namespace QuestionSet
{
	namespace Zhangzj
	{
		int DonateSeconds(std::vector<std::string> speech, std::vector<std::string> words);
	}

	namespace MakeTwoConsecutive
	{
		std::string MakeConsecutiveString(std::string original);
	}

	namespace BearPair
	{
		int LargestDistance(std::string input);
	}

	namespace CostOfDancing
	{
		int MinimumCost(int numberOfDances, std::vector<int> listOfCosts);
	}
}

#endif
