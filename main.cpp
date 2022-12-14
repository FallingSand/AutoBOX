//
// Created by 21128 on 2022/12/16.
//

#include <bits/stdc++.h>

using namespace std;

const string about_ab_msg = "AutoBOX console is a tool box for easily using computer\n"
                  "AutoBOX 命令行版本 是 一个让电脑使用更轻松的软件\n"
                  "Developer : FallingSand / \n";

const string mode = "exit : exit this program 退出本程序\n"
                   "aabm (about_auto_box_msg) : about this program 关于本程序\n"
                   "cls (clear screen) : clear the screen 清空屏幕\n"
                   "\n"
                   ">>>";

string ask_mode_and_return(const string ask) {
    string answer;

    printf("%s", ask.c_str());
    scanf("%s", &answer);

    return answer;
}

int main() {
    printf("%s", about_ab_msg.c_str());

    string answer;
    while (true) {
        answer = ask_mode_and_return(mode);

        if (answer == "exit") {
            break;
        } else if (answer == "aabm") {
            printf("%s", about_ab_msg.c_str());
        } else if (answer == "cls") {
            system("cls");
        } else {
            cout << "Unknown input 未知的功能\n";
        }

        answer = "";
/*        switch (answer) {
            case "exit" :
                break;
            case "aabm" :
                printf("%s", about_ab_msg);
                break;
            case "cls" :
                system("cls");
                break;
            default :
                cout << "Unknown input 未知的功能";
        }*/
    }

    return 0;
}
