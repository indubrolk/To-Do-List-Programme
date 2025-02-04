#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char *task;
  int completed;
} Task;

Task *tasks = NULL;
int length = 0;

void addTask(const char *task){
  tasks = (Task *)realloc(tasks, (length + 1) * sizeof(Task));
  tasks[length].task = (char *)malloc(strlen(task) + 1);
  tasks[length].completed = 0;

  strcpy(tasks[length].task, task);

  length++;
  printf("Task Added");
}

void listTasks(){
  char status;

  for (int i = 0; i < length; i++){
    if(tasks[i].completed == 1){
    status = 'd';
  } else {
    status = 'n';
  }

}

}

void markCompleted(){

}

void deleteTasks(){

}

void editTask(){

}



int main(){
  return 0;
}