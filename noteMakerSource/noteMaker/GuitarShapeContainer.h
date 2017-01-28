#ifndef GUITARSHAPECONTAINER_H
#define GUITARSHAPECONTAINER_H

#include <string>
#include <vector>
class GuitarShapeContainer
{
public:
	
	enum ClassType { null=0, scale=1, chord=2, sequence=3 };
	struct note{
	public:
		std::string sNote;
		int iNoteNumber;
		int iString;
	};
	GuitarShapeContainer();
	GuitarShapeContainer(std::string nameIn, ClassType type);

	~GuitarShapeContainer();

	void setName(std::string nameIn);
	void setType(ClassType type);
	void appendNote(std::string noteCharacter, int noteNumber, int string);
	void clear();
	void writeToJSON(std::string outFile);
	bool fileExists(const std::string& filename);
	bool directoryExists(const char * pathName);
	bool directoryExists(std::string pathName);

private:
	std::string sName;
	ClassType csType;
	int level;
	int position;
	std::vector<note> notes; 



};
#endif //GuitarShapeContainer

