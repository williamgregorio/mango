// sessions are controlled per projects
// a project has a name with a log of history good or bad
// a user can move along different projects as he chooses but only one per view
// a project should save a struct of valued data that has identity of completion

// writing to a database that is quick is essential, sqlite3 is of choice.
#include <stdio.h>
struct session {
  int id;
  char name;
};

int main(void) {
  return 0;
}
