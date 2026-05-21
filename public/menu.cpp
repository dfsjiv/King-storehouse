#include<iostream>
#include<algorithm>
#include<string>
#include"menu.h"
#include<cctype>
#include<Windows.h>
void menu::menu_show()
{
    const std::string tasks[] = { "Initializing Kernel", "Loading Drivers", "Mounting Filesystem", "Starting Services" };

    for (int i = 0; i <= 20; i++)
    {
        // 1. 清屏并重置界面布局
        std::system("cls");

        // 2. 绘制顶部 Header
        std::cout << "=== SYSTEM BOOT SEQUENCE ===" << std::endl;
        std::cout << "Status: " << tasks[i % 4] << "..." << std::endl;
        std::cout << "----------------------------" << std::endl;

        // 3. 绘制中间图形 (根据进度切换)
        int frame = i % 3;
        if (frame == 0)      std::cout << "      /  \n     /   \n    /    " << std::endl;
        else if (frame == 1) std::cout << "      |  \n      |  \n      |  " << std::endl;
        else                 std::cout << "      \\  \n       \\ \n        \\" << std::endl;

        // 4. 绘制进度条
        std::cout << "\nProgress: [";
        for (int j = 0; j < 20; j++) {
            if (j < i) std::cout << "#";
            else std::cout << ".";
        }
        std::cout << "] " << (i * 5) << "%" << std::endl;

        Sleep(300);
    }

    // 5. 最终状态
    std::system("cls");
    std::cout << "=== SYSTEM READY ===" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "-";
        std::cout.flush();
        Sleep(500);
    }
    std::cout << " DONE" << std::endl;

}