#include "ProcessPool.h"
#include <iostream>
#include <unistd.h>
#include <apue.h>
#include <stdlib.h>
#include <sys/wait.h>
ProcessPool::ProcessPool(){
}
ProcessPool::~ProcessPool(){
}
void ProcessPool::addTask(const std::string &task){
	task_list.push(task);
}
bool ProcessPool::run(){
	pid_t pid;
	while(!task_list.empty()){
		pid=fork();
		if(pid<0)
			throw ForkError();
		std::string task=task_list.front();
		task_list.pop();
		if(pid==0) {
			execl(task.c_str(),(char *)0);
			exit(127);
		}
		else
		{
			pid_name[pid]=task.c_str();
			process_id.insert(pid);
		}
	}
	while(!process_id.empty()){
		int status;
		pid=wait(&status);
		if(process_id.find(pid)!=process_id.end()) 
		{
			process_id.erase(process_id.find(pid));
			pid_result[pid]=status;
			std::cout<<pid<<' '<<pid_name[pid]<<' '<<status<<std::endl;
		}
	}
	return true;
}
void ProcessPool::clear(){
	pid_result.clear();
	pid_name.clear();
	process_id.clear();
	while(!task_list.empty())
	  task_list.pop();
}
