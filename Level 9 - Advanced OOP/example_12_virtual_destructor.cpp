#include <iostream>

class Resource {
public:
    virtual ~Resource() {
        std::cout << "Resource destructor\n";
    }
};

class FileResource : public Resource {
public:
    ~FileResource() override {
        std::cout << "FileResource destructor\n";
    }
};

int main() {
    Resource* resource = new FileResource();
    delete resource;
    return 0;
}
