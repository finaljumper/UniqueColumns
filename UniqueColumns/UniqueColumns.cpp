// Visual Studio 2015 Community
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

void readMatrix(ifstream &input, int **matrixA) 
{
	bool next = false;
	char temp;
	int i = 0, j = 0;
	while (input.good()) 
	{
		input.get(temp);
		if (temp == ' ') 
		{
			i++;
			next = false;
		}
		else if (temp == '\n') 
		{
			if (next)
				break;
			j++;
			i = 0;
			next = true;
		}
		else 
		{
			matrixA[i][j] = temp - '0';
			next = false;
		}
	}
}

int main()
{

    return 0;
}

