#ifndef PROCESS_POOL_H
#define PROCESS_POOL_H
#include <vector>
#include <map>
#include <string>
#include <set>
#include <queue>
class ForkError{
};
class ProcessPool
{
	public:
		ProcessPool();
		~ProcessPool();
		void addTask(const std::string &task);
		bool run();
		void clear();
	private:
		std::queue<std::string> task_list;
		std::set<pid_t> process_id; 
		std::map<pid_t,std::string> pid_name;
		std::map<pid_t,int> pid_result;

};
#endif
