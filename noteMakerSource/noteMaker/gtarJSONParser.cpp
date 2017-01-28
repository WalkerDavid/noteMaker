#include "gtarJSONParser.h"
#include <fstream>

#include <sys/types.h>			// Used for fileExists and directoryExists
#include <sys/stat.h>			// Used for fileExists and directoryExists
#include <stdio.h>

class GuitarShapeContainer;

gtarJSONParser::gtarJSONParser()
{
	vecOfNodes = new std::vector<Node>();
}

gtarJSONParser::~gtarJSONParser()
{
}

std::string gtarJSONParser::sayHello()
{

	return std::string("Hello from gtarJSONParser...");
}

void gtarJSONParser::readJsonFile(std::string fileName)
{
	if (!fileExists(fileName))
		return;

	// File exists :) we can proceed

	// Instanciate an ifstream for the file
	std::ifstream infile("thefile.txt");

	std::string line;
	// check the file is a json fiel
	while (std::getline(infile, line))
	{
		// get firt charachter, is it equals 
	}
}

void gtarJSONParser::exportJsonFile()
{

}


// ------------------------------ gtarJSONParser::Node:: methods ------------------------------
// --------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
void gtarJSONParser::Node::operator=(const int inInt)
{
	this->nodeType = Type::integer;
	this->localInt = inInt;
}

void gtarJSONParser::Node::operator=(const std::string inString)
{
	this->nodeType = Type::integer;
	this->localString = inString;
}

bool gtarJSONParser::fileExists(const std::string& filename)
{
	struct stat buf;
	if (stat(filename.c_str(), &buf) != -1)
	{
		return true;
	}
	return false;
}
