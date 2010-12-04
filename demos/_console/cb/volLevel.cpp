
/*
	----------------------------------------------

	  volLevel.cpp
	  Voice Communicator components version 2.5
	  Audio Tools - simple PCM volume meter C++ application

	----------------------------------------------
	  This source code cannot be used without
	  proper permission granted to you as a private
	  person or an entity by the Lake of Soft, Ltd

	  Visit http://lakeofsoft.com/ for details.

	  Copyright (c) 2001, 2003 Lake of Soft, Ltd
		     All rights reserved
	----------------------------------------------

	  created by:
		Lake, 13 Apr 2002

	  modified by:
		Lake, Apr 2002
		Lake, May 2002
		Lake, Jun 2003

	----------------------------------------------
*/

#include "volLevelApp.hpp"

#ifdef CONSOLE
int main () {
#else
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
#endif
	unaVolLevelApp* app = new unaVolLevelApp(true, "PCM volLevel,  version 1.1  ", "Copyright (c) 2002-2003 Lake of Soft, Ltd");
	app->run();
	delete (app);

	return (0);
}
 