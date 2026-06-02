// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
#include <iostream>
#include "EnemyFactory.h"
#include "Enemy.h"

int main()
{
    for (int id = 1; id <= 4; id++)
    {
        Enemy* enemy = EnemyFactory::CreateEnemy(id);

        std::cout << enemy->Data.Name << " HP:" << enemy->Data.HP << std::endl;
        std::cout << enemy->Data.Name << " ATK:" << enemy->Data.ATK << std::endl;
        std::cout << enemy->Data.Name << " DEF:" << enemy->Data.DEF << std::endl;
        std::cout << enemy->Data.Name << " SPD:" << enemy->Data.SPD << std::endl;
        std::cout << enemy->Data.Name << " Gold:" << enemy->Data.Gold << std::endl;
        std::cout << enemy->Data.Name << " EXP:" << enemy->Data.EXP << std::endl;
        std::cout << enemy->Data.Name << " CriticalRate:" << enemy->Data.CriticalRate << std::endl;
        std::cout << "" << std::endl;

        delete enemy;

        //  HPの合計
        int totalHP = 0;
        for (int id = 1; id <= 4; id++)
        {
            Enemy* enemy = EnemyFactory::CreateEnemy(id);
            totalHP += enemy->Data.HP;
            delete enemy;
        }

        std::cout << "HPの合計 = " << totalHP << std::endl;
        std::cout << " "  << std::endl;

        //  ATKの平均求める
        int totalATK=0;
        int aveATK = 0;
        for (int id = 1; id <= 4; id++)
        {
            Enemy* enemy = EnemyFactory::CreateEnemy(id);
            totalATK += enemy->Data.ATK;
            aveATK = totalATK / 4;
        }
        std::cout << "ATKの平均 = " << aveATK << std::endl;

        //  ランダムに敵を生成する変数
        //int random = 0;
        

        srand(time(NULL));
        printf("%d", rand());
        return 0;
    }
	
	

	return 0;
}


