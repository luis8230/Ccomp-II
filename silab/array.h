#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
#include <string.h>
using namespace std;
class array
{
	public:
		array(int);
		void imp();
		void sila(char*);
	protected:
	private:
		int size;
		char *data;
};

#endif
