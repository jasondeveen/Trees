#include <stdio.h>
#include <string>
#include <iostream>
#include "headers/node.h"


int main (){
	Node NodeMichael("Michael");
	Node NodeJake("Jake");
	Node NodeLouis("Louis");


	NodeMichael.AddChild(&NodeJake);
	NodeMichael.AddChild(&NodeLouis);


	NodeMichael.Introduce();

	return 0;
}



