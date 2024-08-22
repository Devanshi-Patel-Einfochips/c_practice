#include <string>
#include<vector>
#include<iostream>
#include <thread>

using namespace std;
	using namespace std::chrono_literals;


class TaskScheduler
{
    public:

        void createTask(){
            this_thread::sleep_for(1s);
        }
         void RunTask(){
            this_thread::sleep_for(5s);
        }
         void completeTask(){
            this_thread::sleep_for(8s);
        }
};

TaskScheduler:: createTask(){
    
}

int main(){

    TaskScheduler ts;
    auto call1 = [&ts](){
        ts.createTask(){
            cout << "TASK HAS BEEN CREATED" << endl;
        }
    }

}