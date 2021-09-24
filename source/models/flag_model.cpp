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

        void print_flags() {
            cout << "Flags enabled: \n";
            if (c) {
                cout << "c enabled: " << c_file << "\n";
            }
            if (e) {
                cout << "e enabled: " << e_file << "\n";
            }
            if (h) {
                cout << "h enabled\n";
            }
            if (t) {
                cout << "t enabled\n";
            }
        }

        int store_flag(char *flag) {
            int len_flag = strlen(flag);

            if (len_flag != 2) {
                cout << "Error, invalid flag:" << flag << "\n";
                return (-1);
            } else {
                switch(flag[1]) {
                    case 'c':
                        c = 1;
                        return (1);
                    case 'e':
                        e = 1;
                        return (2);
                    case 'h':
                        h = 1;
                    case 't':
                        t = 1;
                    return (0);
                }
            }
        }

        #define C_FLAG 1
        #define E_FLAG 2

        void store_file(string filepath, int type_of_flag) {
            if (type_of_flag == C_FLAG) {
                c_file = filepath;
            } else if (type_of_flag == E_FLAG) {
                e_file = filepath;
            }
        }
        
        void parse_flags(int argc, char **argv) {
            int flag_received = 0;

            for (int i = 0; i < argc; i++) {
                if (argv[i][0] == '-') {
                    flag_received = store_flag(argv[i]);
                    if (flag_received == 1 || flag_received == 2) {
                        i++;
                        store_file(argv[i], flag_received);
                    }
                }
            }
            print_flags();
        };
};