#include "QuestionSet.h"
#include "TestSet.h"

int main()
{
	std::string speech[] = { "je", "le", "ai", "deja", "vu", "et", "je", "le", "veux", "encore" };
	std::string words[] = { "i", "am", "having", "deja", "vu", "please", "stop", "the", "encore" };
	printf("%d\n", QuestionSet::Zhangzj::DonateSeconds(speech, words));
	return 0;
}

