#pragma once
enum AccessSpecifier{privateAceess, protectedAccess, publicAccess};
class Symbol{};
class DataModifier{
public:
	AccessSpecifier accessSpecifier;//Default is publicAccess
	bool isStatic;
	bool isOverride;
	bool isConst;
};
class DataMember{
private:
	char* name;
	DataModifier * dataModifier;
public:
	DataMember(void);
	~DataMember(void);
	void setName(char* name);
	char* getName();
	void setDataModifier(DataModifier * dm);
	DataModifier * getDataModifier();
};

