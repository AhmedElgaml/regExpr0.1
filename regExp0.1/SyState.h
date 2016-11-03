#pragma once

#include <stdint.h>
#include <vector>
#include <map>
#include <memory>


class SyState
{
public:
	typedef std::vector<std::shared_ptr<SyState>> SyStateVector;
	SyState(uint16_t);

	void setState(uint16_t);
	uint16_t getState();

	void addEdge(char,const std::shared_ptr<SyState>&);

	~SyState();

private:
	uint16_t mId;

	std::map<char,std::shared_ptr<SyState>>data; 
};

