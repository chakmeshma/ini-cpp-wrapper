#include <vector>
#include <iostream>

void* iniReaderInstantiate(const char* fileName);
void iniReaderDestroy(void* iniReader);
bool iniReaderGetBool(void* iniReader, const char* section, const char* name);
int iniReaderGetInt(void* iniReader, const char* section, const char* name);
float iniReaderGetFloat(void* iniReader, const char* section, const char* name);
std::string iniReaderGetString(void* iniReader, const char* section, const char* name);
std::string iniReaderGetStringDefault(void* iniReader, const char* section, const char* name, const char* def);
float iniReaderGetFloatDefault(void* iniReader, const char* section, const char* name, float defaultValue);
std::vector<float> iniReaderGetFloatVector(void* iniReader, const char* section, const char* name);

int main()
{
	void* iniReader = iniReaderInstantiate("config.ini");

	std::vector<float> clearColor = iniReaderGetFloatVector(iniReader, "Misc", "ClearColor");

	iniReaderDestroy(iniReader);

	std::cout << clearColor[0] << std::endl;

	return 0;
}
