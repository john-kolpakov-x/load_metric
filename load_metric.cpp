#include <iostream>
#include <ncurses.h>

using namespace std;

int main() {
  initscr();
  move(10,30);
  printw("Hello world !!!");
  refresh();
  getch();
  endwin();
  cout << "Hello, World!" << endl;
  return 0;
}
