#ifndef LE_LISTENER_H
#define LE_LISTENER_H

class LeListener
{
public:
	LeListener(int port);
	~LeListener();

	void start();
	Client* accept();

private:
	int m_socket;
	int m_port; // uint32? 
};

#endif