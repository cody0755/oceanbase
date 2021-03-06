#ifndef TASK_OUTPUT_H_
#define TASK_OUTPUT_H_

#include <string>
#include <map>

using namespace std;

namespace oceanbase
{
  namespace tools
  {
    class TaskOutput
    {
    public:
      TaskOutput();
      virtual ~TaskOutput();
    
    protected:
      struct OutputInfo
      {
        uint64_t peer_id_;
        string file_;
      };
    
    public:
      int64_t size(void) const; 
      int add(const uint64_t task_id, const int64_t peer_id, const string & file);
      int print(FILE * output_file);
    
    private:
      std::map<uint64_t, OutputInfo> file_list_;
    };
  }
}


#endif // TASK_OUTPUT_H_
