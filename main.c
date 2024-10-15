// sessions are controlled per projects
// a project has a name with a log of history good or bad
// a user can move along different projects as he chooses but only one per view
// a project should save a struct of valued data that has identity of completion
// writing to a database that is quick is essential, sqlite3 is of choice.

#include <stdio.h>
typedef struct {
  int id;
  char name[100];
} session_t;

typedef struct {
  int response;
} response_t;

void getNameSession(session_t *session) {
  printf("Name your session: \n");
  scanf("%s100", session->name);
  printf("Your new session name is: %s\n", session->name);
}

void navigation() {
}

void dashboard(response_t *response) {
  printf("--Mango--\n");
  printf("Enter your choice: \n");
  scanf("%i", &response->response);
}

int main(void) {
  session_t session;
  session.id = 0;
  getNameSession(&session);
  printf("Your session id: %i\n", session.id);

  response_t response;
  dashboard(&response);
  return 0;
}
