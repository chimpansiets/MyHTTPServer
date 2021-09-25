#include <vector>

using namespace std;

class Location {
    
};

class ServerConfig {
    public:
        string name;
        string host;
        int port;
        string root;
        vector<string> error_pages;
        double max_client_body_size_mb;
        vector<Location> routes;
        
        int socket_fd;
};

class MainConfig {
    public:
        vector<ServerConfig> servers;
};