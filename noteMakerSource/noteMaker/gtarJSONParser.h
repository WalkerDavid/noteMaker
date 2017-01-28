/*	Developed by:	David Walker
	This work is created by the developer is the property of David Walker
	all rights reserverd
*/


#ifndef GTARJSONPARSER_H
#define GTARJSONPARSER_H

#include "GuitarShapeContainer.h"
#include <vector>
#include <string>

class GuitarShapeContainer;


//#pragma once
class gtarJSONParser
{
public:
	gtarJSONParser();
	~gtarJSONParser();

	static std::string sayHello();

	void readJsonFile(std::string fileName);
	void exportJsonFile();


	class Node{
	public:
		Node();
		~Node();

		void operator=(const int inInt);
		void operator=(const std::string inString);

		template <typename T>
		T getValue()
		{
			if (TnodeType == Type::integer)
			{
				return localInt;
			}
			else
			{
				return localString;
			}
		}

	private:
		enum Type{string,integer};
		Type nodeType;
		std::string localString;
		int localInt;
		
	};
private:
	std::vector<Node> *vecOfNodes;
	bool fileExists(const std::string& filename);
};

#endif // GTARJSONPARSER_H

