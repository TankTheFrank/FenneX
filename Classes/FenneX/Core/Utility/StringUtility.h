/****************************************************************************
Copyright (c) 2013-2014 Auticiel SAS

http://www.fennex.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************///

#ifndef __FenneX__StringUtility__
#define __FenneX__StringUtility__

#include "cocos2d.h"
#include "FenneXMacros.h"
USING_NS_CC;

NS_FENNEX_BEGIN
//Perform a real string comparison, whereas the default CCArray::containsObject just do a pointer comparison
bool arrayContainsString(CCArray* list, CCString* string);
int arrayGetStringIndex(CCArray* list, CCString* string);
void arrayRemoveString(CCArray* list, CCString* string);
void arrayRemoveStringFromOther(CCArray* list, CCArray* other);


//Will return a new string with the first letter upper-case or lower-cased
CCString* changeFirstLetterCase(CCString* text, bool lower);
std::string changeFirstLetterCase(std::string text, bool lower);
CCString* upperCaseFirstLetter(CCString* text);
std::string upperCaseFirstLetter(std::string text);
CCString* lowerCaseFirstLetter(CCString* text);
std::string lowerCaseFirstLetter(std::string text);

//Those methods are UTF-8 aware and require letters_conversion.txt resource to work (add it to project on iOS)
CCString* upperCaseString(CCString* text);
std::string upperCaseString(std::string text);

bool stringEndsWith(std::string str, std::string suffix);

//Use Percent-encoding as defined in https://en.wikipedia.org/wiki/Percent-encoding
//Useful to submit forms, since libcurl curl_easy_escape is hard to use
//Not utf-8 aware, but it should work with utf-8 characters as well
std::string urlEncode(const std::string& str);

//Do a substring with utf8 aware code
std::string utf8_substr(const std::string& str, long start, long leng);
//Get the size of a single character
long utf8_chsize( const char* source );
//Get the size of an utf8 string
long utf8_len( const std::string& s );
NS_FENNEX_END

#endif /* defined(__FenneX__StringUtility__) */
