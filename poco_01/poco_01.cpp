#include <iostream>
#include "Poco/Util/Application.h"
using namespace std;
using Poco::Util::Application;


class MyApp : public Application {
private:
    virtual int main(const std::vector < std::string > & args) override {
        cout << "Hello from POCO application." << endl;
        return ExitCode::EXIT_OK;
    }
};

POCO_APP_MAIN(MyApp)
