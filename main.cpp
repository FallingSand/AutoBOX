//
// Created by 21128 on 2022/12/16.
//

#include <bits/stdc++.h>

using namespace std;

const char *about_ab_msg = "AutoBOX console is a tool box for easily using computer\n"
                  "AutoBOX 命令行版本 是 一个让电脑使用更轻松的软件\n"
                  "Developer : FallingSand / ";

string ask_mode_and_return(const string& ask) {
    string answer;

    printf("%s", ask.c_str());
    scanf("%s", &answer);

    return answer;
}

int main() {
    printf("%s", about_ab_msg);

    while (true) {
    string answer = ask_mode_and_return("");
    }

    return 0;
}
