#include "ncurses-v4l2-ctl.hpp"

int main() {
	NCurses_v4l2_ctl curses;
	while(!curses.should_exit) {
		//noecho();
		if(!curses.parseCommands()) {
			break;	// no controls => just exit, not infinite loop.
		}
		if(!curses.should_exit) {
			curses.editValue();
		}
	}
	return 0;
}
