#ifndef LE_CLIENT_H
#define LE_CLENTT_H

#include <string>

#include <SDL_net.h>

class LeClient
{
public:
	LeClient();
	~LeClient();

	void connect(std::string const&, Uint16 port);

	std::string read() const;
	void write(std::string const&);

private:
	LeClient(TCPsocket socket);

	TCPsocket m_socket; // SDL TCPsocket structure
};

#endif