#include "StdAfx.h"
#include "Node.h"


Node::Node()
{
	j=0;
	tcreated=time(0);
}

int Node::getNum() {return j; }

void Node::setNum(int i){ j = i; }

time_t Node::getTime(){ return tcreated; }

void Node::setTime(time_t t){tcreated = t;}

Node::~Node()
{
}
