#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool myfunction(const :string &i, const :string &j) {
    return (i < j);
}

struct myclass {
    bool operator()(const string &i, const string &j) {
        return (i < j);
    }
} myobject;

int main() {
    vector<string> businesses;

    cout << "Welcome to the Business Sorting Program!\n";

    string response;
    do {
        string businessName;
        cout << "\nPlease enter the name of a business: ";
        getline(cin, businessName);

        businesses.push_back(businessName);

        sort(businesses.begin(), businesses.end(), myobject);

        cout << "\nYour businesses are:\n";
        for (const auto &business : businesses)
            cout << "    " << business << "\n";

        cout << "\nAnother business? (yes/no): ";
        getline(cin, response);

    } while (response == "yes" || response == "Yes" || response == "Y" || response == "y");

    cout << "\nThank you for using the Business Sorting Program!\n";

    return 0;
}