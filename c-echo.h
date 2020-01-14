#include <iostream>

std::string echo(int length, char** chars) {
	std::string ret = "";
	for (int i = 1; i < length; i++) {
		ret += chars[i];
		// print a whitespace after all but hte last iteration
		if (i < length -1) {
			ret += " ";
		}
	}
	ret += "\n";
	return ret;
}
