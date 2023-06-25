#include <iostream>

void* iniReaderInstantiate(const char* fileName);
void iniReaderDestroy(void* iniReader);
bool iniReaderGetBool(void* iniReader, const char* section, const char* name);
int iniReaderGetInt(void* iniReader, const char* section, const char* name);
float iniReaderGetFloat(void* iniReader, const char* section, const char* name);
std::string iniReaderGetString(void* iniReader, const char* section, const char* name);
std::string iniReaderGetStringDefault(void* iniReader, const char* section, const char* name, const char* def);

int main()
{
    void* iniReader = iniReaderInstantiate("config.ini");

    bool zz = iniReaderGetBool(iniReader, "section1", "any");

    iniReaderDestroy(iniReader);

    zz = iniReaderGetBool(iniReader, "section1", "any");

    //inih::INIReader r{"config.ini"};

    //// Get and parse the ini value
    //const auto& v1 = r.Get<std::string>("section1", "any"); // "5"
    //const auto& v2 = r.Get<int>("section1", "any"); // 5
    //const auto& v3 = r.Get<double>("section1", "any"); // 5.0
    //const auto& v4 = r.GetVector<float>("section2", "any_vec"); // [1.0, 2.0, 3.0]
    //const auto& v5 = r.GetVector<std::string>("section2", "any_vec"); // ["1", "2", "3"]

    return 0;
}
