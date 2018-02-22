#include "QuestionSet.h"
#include "TestSet.h"

//	Source: https://community.topcoder.com/stat?c=problem_statement&pm=14675

//	Problem Statement
//
//	Zhangzj is the emperor of Yali empire and is esteemed by his people.
//	"Long live Zhangzj" is heard across the country.Needless to say, 
//  people in the empire hope their leader will live forever. However, 
//  everybody will die, unless others donate their lives to the person.
//	In the empire, there's a special way to donate life. There are some 
//  fixed words that are called exciting. Whenever someone speaks an exciting word, 
//  he automatically donates one second of his life to Zhangzj. 
//  For example, "toad" and "river" are exciting. Then, if somebody says 
//  the sequence of words "a", "toad", "jumps", "into", "the", "toad", "river", 
//  they donate three seconds to Zhangzj.
//	Given a String[] speech containing all the words someone says, 
//  and a String[] words containing all exciting words, 
//  return the number of seconds the speaker will donate to Zhangzj.
//	A word may appear multiple times in speech, but not in words.
//
//
//	Definition
//
//	Class : LongLiveZhangzj
//	Method : donate
//	Parameters : String[], String[]
//	Returns : int
//	Method signature : int donate(String[] speech, String[] words)
//	(be sure your method is public)
//
//
//	Constraints
//
//	- Both speech and words will contain between 1 and 50 elements, inclusive.
//	- All pairs of elements in words will be distinct.
//	- Each element of speech and words will consist only of lowercase English letters.
//	- The length of each element of speech and words will be between 1 and 50, inclusive.
int QuestionSet::Zhangzj::DonateSeconds(std::vector<std::string> speech, std::vector<std::string> words)
{
	int seconds = 0;
	// Check all elements in speech
	for (size_t i = 0; i < speech.size(); i++)
	{
		// Compare it to all elements in words until find a match
		for (size_t j = 0; j < words.size(); j++)
		{
			// If there is a same word in words, increment seconds,
			// move search source to the next one, and reset searching index
			if (speech[i] == words[j])
			{
				seconds++;
				if (i < speech.size())
					break;
			}
		}
	}
	return seconds;
}

// Test Cases for DonateSeconds() function
void TestSet::Zhangzj::DonateSeconds_Test()
{
	// Test Case 1
	// Expected Output: 3
	// Actual Output:	3
	//std::vector<std::string> speech = { "make", "topcoder", "great", "again" };
	//std::vector<std::string> words = { "make", "america", "great", "again" };

	// Test Case 2
	// Expected Output: 0
	// Actual Output:	0
	//std::vector<std::string> speech = { "toads" };
	//std::vector<std::string> words = { "toad" };

	// Test Case 3
	// Expected Output: 2
	// Actual Output:	2
	//std::vector<std::string> speech = { "a", "a" };
	//std::vector<std::string> words = { "a" };

	// Test Case 4
	// Expected Output: 3
	// Actual Output:	3
	std::vector<std::string> speech = { "je", "le", "ai", "deja", "vu", "et", "je", "le", "veux", "encore" };
	std::vector<std::string> words = { "i", "am", "having", "deja", "vu", "please", "stop", "the", "encore" };

	printf("%d\n", QuestionSet::Zhangzj::DonateSeconds(speech, words));
}
