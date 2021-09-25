#include <string>

using namespace std;

class Flags {
    public:
        int c = 0;
        string c_file;
        int e = 0;
        string e_file;
        int h = 0;
        int t = 0;

        void print_flags();
        void store_file(string filepath, int type_of_flag);
        void parse_flags(int argc, char **argv);
        int store_flag(char *flag);
};
