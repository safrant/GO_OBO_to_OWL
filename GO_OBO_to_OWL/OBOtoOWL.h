
#ifndef _OBO2TDE_
#define _OBO2TDE_

#include <string>
#include <list>
#include <vector>
#include <map> 
using namespace std;

class OBOtoOWL
{
public:
	OBOtoOWL(void);
	~OBOtoOWL(void);
    int ReverseFind(string s, char c);
    string replaceChar(string &s, char c1, char c2);
    string replaceAmp( string &s );
	int ReverseFind(const string &str, char c); 
    string TrimRight(string &s);
    string TrimLeft(string &s);
    string LSubString (const string &s, int n);
    string RSubString (const string &s, int n);
};

#endif
