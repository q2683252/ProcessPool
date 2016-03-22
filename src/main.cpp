#include <stdio.h>
#include <queue>
#include <map>
#include "ProcessPool.h"
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
	ProcessPool pool;
	for(int i=0;i<200;i++)
	  pool.addTask(string("ls"));
	pool.run();
	return 0;
}

