#include "_ini.hpp"

using namespace _inih;

void* iniReaderInstantiate(const char* fileName) {
	INIReader* reader = new INIReader(fileName);

	return reinterpret_cast<void*>(reader);
}

void iniReaderDestroy(void* iniReader) {
	INIReader* reader = reinterpret_cast<INIReader*>(iniReader);

	delete reader;
}

bool iniReaderGetBool(void* iniReader, const char* section, const char* name) {
	INIReader* reader = reinterpret_cast<INIReader*>(iniReader);

	return reader->Get<bool>(section, name);
}

int iniReaderGetInt(void* iniReader, const char* section, const char* name) {
	INIReader* reader = reinterpret_cast<INIReader*>(iniReader);

	return reader->Get<int>(section, name);
}

float iniReaderGetFloat(void* iniReader, const char* section, const char* name) {
	INIReader* reader = reinterpret_cast<INIReader*>(iniReader);

	return reader->Get<float>(section, name);
}

std::string iniReaderGetString(void* iniReader, const char* section, const char* name) {
	INIReader* reader = reinterpret_cast<INIReader*>(iniReader);

	return reader->Get<std::string>(section, name);
}

std::string iniReaderGetStringDefault(void* iniReader, const char* section, const char* name, const char* defaultValue) {
	INIReader* reader = reinterpret_cast<INIReader*>(iniReader);

	return reader->Get<std::string>(section, name, defaultValue);
}
