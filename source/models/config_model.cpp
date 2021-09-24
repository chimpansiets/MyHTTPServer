using namespace std;

class MainConfig {

};

class ServerConfig {
    public:
        string name;
        string host;
        int port;
        string root;
        vector<string> error_pages;
        double max_client_body_size_mb;
};