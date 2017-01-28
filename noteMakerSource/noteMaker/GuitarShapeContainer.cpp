#include "GuitarShapeContainer.h"
#include <fstream>
#include <sys/types.h>			// Used for fileExists and directoryExists
#include <sys/stat.h>			// Used for fileExists and directoryExists

GuitarShapeContainer::GuitarShapeContainer()
{
}

GuitarShapeContainer::GuitarShapeContainer(std::string nameIn, ClassType type)
{
	sName = nameIn;
	csType = type;
}


GuitarShapeContainer::~GuitarShapeContainer()
{
}

void GuitarShapeContainer::setName(std::string nameIn)
{
	sName = nameIn;
}

void GuitarShapeContainer::setType(ClassType type)
{
	csType = type;
}

void GuitarShapeContainer::appendNote(std::string noteCharacter, int noteNumber, int string)
{
	note localNote;
	localNote.sNote = noteCharacter;
	localNote.iNoteNumber = noteNumber;
	localNote.iString = string;
	notes.push_back(localNote);
}

void GuitarShapeContainer::clear()
{
	sName = "";
	csType = null;
	level = 0;
	position = 0;
	notes.clear();
}

void GuitarShapeContainer::writeToJSON(std::string outFile)
{
	if (!fileExists(outFile))
	{
		// File doesn't exist, so create it

	}
}

bool GuitarShapeContainer::fileExists(const std::string& filename)
{
	struct stat buf;
	if (stat(filename.c_str(), &buf) != -1)
	{
		return true;
	}
	return false;
}

bool GuitarShapeContainer::directoryExists(const char * pathName)
{
	struct stat info;
	bool returnVal;

	if (stat(pathName, &info) != 0)
		returnVal = false; // printf("cannot access %s\n", pathName);
	else if (info.st_mode & S_IFDIR)  // S_ISDIR() doesn't exist on my windows 
		returnVal = true; // printf("%s is a directory\n", pathName);
	else
		returnVal = false; // printf("%s is no directory\n", pathName);
	return returnVal;
}

bool GuitarShapeContainer::directoryExists(std::string pathName)
{
	const char * cPathName = pathName.c_str();

	struct stat info;
	bool returnVal;

	if (stat(cPathName, &info) != 0)
		returnVal = false; // printf("cannot access %s\n", cPathName);
	else if (info.st_mode & S_IFDIR)  // S_ISDIR() doesn't exist on my windows 
		returnVal = true; //printf("%s is a directory\n", cPathName);
	else
		returnVal = false; //printf("%s is no directory\n", cPathName);

	return returnVal;

}