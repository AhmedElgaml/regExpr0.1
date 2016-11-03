#include "SyState.h"
#include <utility>

SyState::SyState(uint16_t fId):mId(fId)
{
}

void SyState::setState(uint16_t fId){
	mId = fId;
}

uint16_t SyState::getState(){
	return mId;
}

void SyState::addEdge(char fInput,const std::shared_ptr<SyState>& fState){
	data.insert(make_pair(fInput,fState));
}


SyState::~SyState(void)
{
}
