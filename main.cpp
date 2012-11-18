#include <iostream>
#include "model_obj.h"

ModelOBJ	g_Model;

using namespace std;

void printHelp(char *cmd)
{
	cout << "Usage: " << endl << endl;
	cout << " " << cmd << " [OPTIONS] FILE" << endl;
	cout << endl;
	cout << " No options yet :)" << endl;
	cout << endl;
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		printHelp(argv[0]);
		return -1;
	}

	if(!g_Model.import(argv[1]))
	{
		cout << "Failed to load Model: " << argv[1] << endl;
		return -1;
	}

	g_Model.normalize();

	return 0;
}
