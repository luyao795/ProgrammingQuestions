#include "QuestionSet.h"
#include "TestSet.h"

#define WaitForInput() getchar()
#define Success 0

int main()
{
	// Test for Zhangzj
	//{
	//	TestSet::Zhangzj::DonateSeconds_Test();
	//}

	// Test for MakeTwoConsecutive
	//{
	//	TestSet::MakeTwoConsecutive::MakeTwoConsecutive_Test();
	//}

	// Test for BearPair
	{
		TestSet::BearPair::LargestDistance_Test();
	}

	WaitForInput();
	return Success;
}

