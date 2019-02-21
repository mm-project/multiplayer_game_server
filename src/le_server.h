#ifndef LE_SERVER_H
#define LE_SERVER_H

class LeServer
{
public:
	bool Init();
	void Quit();
};

class LeMessage
{
public:
	enum STATES {
		EMPTY = 0,
		READING,
		WRITING
	};

public:
	LeMessage();

};

#endif