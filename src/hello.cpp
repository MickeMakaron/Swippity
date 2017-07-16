#include "hello.hpp"

std::string hello()
{
	static bool doHello = true;
	if(doHello)
	{
		doHello = false;
		return "hello";
	}
	return "bye";
}
