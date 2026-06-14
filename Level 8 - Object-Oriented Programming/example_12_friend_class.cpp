#include <iostream>
using namespace std;

class Secret {
private:
    int code;

public:
    Secret() {
        code = 1234;
    }

    friend class Viewer;
};

class Viewer {
public:
    void showSecret(Secret secret) {
        cout << "Secret code: " << secret.code << endl;
    }
};

int main() {
    Secret secret;
    Viewer viewer;
    viewer.showSecret(secret);

    return 0;
}
