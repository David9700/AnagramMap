#pragma once
#include<map>

bool Anagram(std::string sa,std::string sb)
{
	if (sa.size() != sb.size())
		return false;

	std::map<char, int> mm;
	bool anagram = true;

	for (int i = 0; i < sa.size(); ++i)
		mm[sa[i]] += 1;
	
	for (int i = 0; i < sb.size(); ++i)
		mm[sb[i]] -= 1;


	for (auto ii : mm)
	{
		if (ii.second != 0)
		{
			return false;
		}
	}
	return anagram;
}
