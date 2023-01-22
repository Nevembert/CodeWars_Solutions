#include <string>
#include <vector>

std::string likes(const std::vector<std::string>& names) {
    std::string answer;
    if (names.size() == 0) {
        answer = "no one likes this";
    }
    else if (names.size() == 1) {
        answer = names[0] + " likes this";
    }
    else if (names.size() == 2) {
        answer = names[0] + " and " + names[1] + " like this";
    }
    else if (names.size() == 3) {
        answer = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    }
    else {
        int num = names.size() - 2;
        answer = names[0] + ", " + names[1] + " and " + std::to_string(num) + " others like this";
    }

        return answer;
}
