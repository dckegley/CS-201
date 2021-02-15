#pragma once

#include<string>

using std::string;


#ifndef FILE_MODIFYSTRING_Hpp
#define FILE_MODIFYSTRING_Hpp

/**
 * Append an integer to a string
 * @param referencedString string to append integer to
 * @param n append (n % 10) to referencedString
 * @return New length of referencedString
 */

int modifyString(string& referencedString, int i);




#endif 
